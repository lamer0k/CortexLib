//
// Created by Sergey on 28.10.2019.
//

#ifndef REGISTERS_PINSPACK_HPP
#define REGISTERS_PINSPACK_HPP

#include <functional>
#include "portslist.hpp" // for PortsList

template <std::uint32_t value, typename... Types>
struct List{} ;
struct NullType {};

namespace PinHelper
{
 
 template<typename ... Types> struct Collection 
 {
   static constexpr int size  =  (sizeof...(Types));   
 };
  struct NullType {};

  //===================== Получаем тип по индексу

  template<typename L, std::size_t i,  typename Res = NullType>
  struct TypeAt
  {
    using Result = Res;
  };
  
  template<typename Res, typename Head, typename ...Tail>
  struct TypeAt<Collection<Head, Tail...>, 0, Res>
  {
    using Result = Head;
  };

  template<std::size_t i, typename Res, typename Head, typename ...Tail>
  struct TypeAt<Collection<Head, Tail...>, i, Res>
  {
    using Result =  typename TypeAt<Collection<Tail...>, i - 1, Res>::Result ;
  };

  template<typename L, std::size_t i>
  using GetType = typename TypeAt<L,i>::Result ;
  
  //=================== Убираем дубликаты для одного типа

  template<typename Q, typename X, typename Acc, bool once> struct Uniq;

  template<typename Q, typename... Tail, typename... Acc>
  struct Uniq<Q, Collection<Q, Tail...>, Collection<Acc...>, false> {
    using type = typename Uniq<Q, Collection<Tail...>, Collection<Acc...,Q>, true>::type;};

  template<typename Q, typename... Tail, typename... Acc>
  struct Uniq<Q, Collection<Q, Tail...>, Collection<Acc...>, true> {
    using type = typename Uniq<Q, Collection<Tail...>, Collection<Acc...>, true>::type;};

  template<typename Q, typename T, typename ... Tail, typename... Acc, bool once>
  struct Uniq<Q, Collection<T, Tail...>, Collection<Acc...>, once> {
    using type = typename Uniq<Q, Collection<Tail...>, Collection<Acc..., T>, once>::type;};

//Терминал
  template<typename Q, typename... Acc, bool once>
  struct Uniq<Q, Collection<>, Collection<Acc...>, once> {
    using type = Collection<Acc...>;};

  template <typename Q, typename L>
  using Once = typename Uniq<Q, L, Collection<>, false>::type;


//===================Убираем дубликаты для списка типов
  template<typename X, typename Y>
  struct Dedup{};

  template<typename T, typename... Tail, typename... Acc>
  struct Dedup<Collection<T, Tail...>, Collection<Acc...>>
  {
    using type = typename Dedup<Collection<Tail...>, Once<T, Collection<T, Acc...>>>::type;
  };

  template<typename T, typename... Acc>
  struct Dedup<Collection<T>, Collection<Acc...>>
  {
    using type = Once<T, Collection<T, Acc...>>;
  };


  template <typename L>
  using Collect = typename Dedup<L, Collection<>>::type;

//==== создаем список простых пинов из списка сложных пинов ==============

  template <typename T, std::uint32_t pin>
  struct PinFake{
    using Port = T ;
    constexpr static std::uint32_t pinNum = pin ;
  };

  template<typename X, typename Y>
  struct CreatePin{};

  template <typename T, typename... Tail, typename... Acc>
  struct CreatePin<Collection<T, Tail...>, Collection<Acc...>>
  {
    using type = typename CreatePin<Collection<Tail...>, Collection<PinFake<typename T::PortType, T::pin>, Acc...>>::type ;
  } ;


  template <typename T, typename... Acc>
  struct CreatePin<Collection<T>, Collection<Acc...>>
  {
    using type = Collection<PinFake<typename T::PortType, T::pin>, Acc...> ;
  } ;


  template <typename L>
  using FromPinToPin = typename CreatePin<L, Collection<>>::type ;


//===================Создаем список портов из фейковых пинов

  template<typename X, typename Y>
  struct Create{};

  template <typename T, typename... Tail, typename... Acc>
  struct Create<Collection<T, Tail...>, Collection<Acc...>>
  {
    using type = typename Create<Collection<Tail...>, Collection<typename T::Port, Acc...>>::type ;
  } ;

  template <typename T, typename... Acc>
  struct Create<Collection<T>, Collection<Acc...>>
  {
    using type = Collection<typename T::Port, Acc...> ;
  } ;

  template <typename L>
  using FakePinListFromPin = Collect<typename Create<FromPinToPin<L>, Collection<>>::type> ;

//======================= Check


  template<typename QueriedType, typename T, typename ... Types>
  constexpr static auto IsUniqueType(Collection<T, Types...>)
  {
    auto result = false ;
    constexpr bool match = std::is_same<T, QueriedType>::value;
    if constexpr (sizeof...(Types) != 0U)
    {
      result =   match ? false : IsUniqueType<QueriedType>(Collection<Types...>());
    }
    else
    {
      result =  match ? false : true;
    }
    return result ;
  }

  template <typename T, typename... Ts>
  constexpr static void Check(Collection<T, Ts...>)
  {
    if constexpr (sizeof...(Ts) != 0U)
    {
      static_assert(IsUniqueType<T>(Collection<Ts...>()), "Беда") ;
      Check(Collection<Ts...>()) ;
    }
  }

}
//==============================GetValue

  template <typename Type, typename ...Ts>
  struct PinsPack ;

  template <typename QueriedType, std::uint32_t value, typename Type, typename ...Ts>
  constexpr static auto GetValue(PinsPack<Type, Ts...>)
  {
    std::uint32_t result = 0U;
    if constexpr (sizeof ...(Ts) != 0U)
    {
      using MyPins = PinsPack<Ts...> ;

      if constexpr ((std::is_same<typename Type::PortType, QueriedType>::value) && ((value & 1U) == 1U))
      {
        result = ((1U << Type::pin) | (GetValue<QueriedType, (value >> 1U) >(MyPins()))) ;
      }
      else
      {
        result = GetValue<QueriedType, (value >> 1U)>(MyPins()) ;
      }
    }
    else
    {
      using MyPins = PinsPack<Type> ;

      if constexpr ((std::is_same<typename Type::PortType, QueriedType>::value) && ((value & 1U) == 1U))
      {
        result = (1U << Type::pin) ;
      }
      else
      {

        result = 0U;
      }
    }
    return result ;
  }


  template <typename QueriedType, typename Type, typename ...Ts>
  constexpr static auto GetValue(PinsPack<Type, Ts...>, std::uint32_t value)
  {
    std::uint32_t result = 0U;

    if constexpr (sizeof ...(Ts) != 0U)
    {
      using MyPins = PinsPack<Ts...> ;      

      if ((std::is_same<typename Type::PortType, QueriedType>::value) && ((value & 1U) == 1U))
      {
        result = ((1U << Type::pin) | (GetValue<QueriedType>(MyPins(), (value >> 1U) ))) ;
      }
      else
      {
        result = GetValue<QueriedType>(MyPins(), (value >> 1U)) ;
      }
    }
    else
    {
      using MyPins = PinsPack<Type> ;

      if ((std::is_same<typename Type::PortType, QueriedType>::value) && (value & 1U) == 1U)
      {
        result = (1 << Type::pin) ;
      }
      else
      {

        result = 0U;
      }
    }
    return result ;
  }





//====================================================
using namespace PinHelper ;
template <typename Type, typename ...Ts>
struct PinsPack
{
    using Pins = PinsPack<Type,Ts...> ;

  private:

    __forceinline template<std::uint32_t value>
    constexpr static auto CreatePortList()
    {
      Check(FromPinToPin<Collection<Type,Ts...>>()) ;
      return List<value, FakePinListFromPin<Collection<Type, Ts...>>>();
    }

    __forceinline template< std::uint32_t value, typename Port, typename ...Ports>
    constexpr static void SetPorts(List<value, Collection<Port, Ports...>>)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      uint32_t result = GetValue<Port, value>(MyPins()) ;
      Port::Set(result) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        MyPins::template SetPorts<value, Ports...>(List<value, Collection<Ports...>>()) ;
      }
    }

    __forceinline template<typename Port, typename ...Ports>
    constexpr static void SetPorts(List<0U, Collection<Port, Ports...>>, std::uint32_t value)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      uint32_t result = GetValue<Port>(MyPins(), value) ;
      Port::Set(result) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        MyPins::template SetPorts<Ports...>(List<0U, Collection<Ports...>>(), value) ;
      }
    }

     __forceinline template< std::uint32_t value, typename Port, typename ...Ports>
    constexpr static void ResetPorts(List<value, Collection<Port, Ports...>>)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      uint32_t result = GetValue<Port, value>(MyPins()) ;
      Port::Reset(result) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        MyPins::template ResetPorts<value, Ports...>(List<value, Collection<Ports...>>()) ;
      }
    }
     
    __forceinline template<typename Port, typename ...Ports>
    constexpr static void ResetPorts(List<0U, Collection<Port, Ports...>>, std::uint32_t value)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      uint32_t result = GetValue<Port>(MyPins(), value) ;
      Port::Reset(result) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        MyPins::template ResetPorts<Ports...>(List<0U, Collection<Ports...>>(), value) ;
      }
    }


   __forceinline template< std::uint32_t value, typename Port, typename ...Ports>
    constexpr static void TogglePorts(List<value, Collection<Port, Ports...>>)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      uint32_t result = GetValue<Port, value>(MyPins()) ;
      Port::Toggle(result) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        MyPins::template TogglePorts<value, Ports...>(List<value, Collection<Ports...>>()) ;
      }
    }

   __forceinline template<typename Port, typename ...Ports>
    constexpr static void TogglePorts(List<0U, Collection<Port, Ports...>>, std::uint32_t value)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      uint32_t result = GetValue<Port>(MyPins(), value) ;
      Port::Toggle(result) ;
      if constexpr (sizeof ...(Ports) != 0U)
      {
        MyPins::template TogglePorts<Ports...>(List<0U, Collection<Ports...>>(), value) ;
      }
    }

public:
     static constexpr size_t size = sizeof ...(Ts) + 1U ;
     
    __forceinline template<std::uint32_t value = 0xffffffffU>
    constexpr static void Set()
    {

      SetPorts(CreatePortList<value>()) ;
    }

    __forceinline static void Set(std::uint32_t value)
    {
      SetPorts(CreatePortList<0U>(), value) ;
    }


    __forceinline template<std::uint32_t value = 0xffffffffU>
    constexpr static void Reset()
    {
      ResetPorts(CreatePortList<value>()) ;
    }


    __forceinline static void Reset(std::uint32_t value)
    {
      ResetPorts(CreatePortList<0>(), value) ;
    }

    __forceinline template<std::uint32_t value = 0xffffffffU>
    constexpr static void Toggle()
    {
      TogglePorts(CreatePortList<value>()) ;
    }


    __forceinline static void Toggle(std::uint32_t value)
    {
      TogglePorts(CreatePortList<0U>(), value) ;
    }
    
} ;


#endif //REGISTERS_PINSPACK_HPP
