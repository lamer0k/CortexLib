//
// Created by Sergey on 28.10.2019.
//

#ifndef REGISTERS_PINSPACK_HPP
#define REGISTERS_PINSPACK_HPP

#include <functional>
#include "portslist.hpp" // for PortsList




namespace PinHelper
{
 
 template<typename ... Types> struct Collection 
 {
   static constexpr int size  =  (sizeof...(Types));   
 };
  struct NullType {};
  template <std::uint32_t value, typename... Types>
  struct List{} ;
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

 ///////////////// Заимствуем идею NoDuplicates из библиотеки LOKI ////////////////
template<class X, class Y> struct Glue;
template<class T, class... Ts> 
struct Glue<T, Collection<Ts...>> {
    using Result = Collection<T, Ts...>;};

template<class Q, class X> struct Erase;

template<class Q>
struct Erase<Q, Collection<>> {
   using Result = Collection<>;};

template<class Q, class... Tail>
struct Erase<Q, Collection<Q, Tail...>> {
   using Result = Collection<Tail...>;};

template<class Q, class T, class... Tail>
struct Erase<Q, Collection<T, Tail...>> {
   using Result = typename Glue<T, typename Erase<Q, Collection<Tail...>>::Result>::Result;};

template <class X> struct NoDuplicates;

template <> struct NoDuplicates<Collection<>>
{
    using Result = Collection<>;
};

template <class T, class... Tail>
struct NoDuplicates< Collection<T, Tail...> >
{
private:
    using L1 = typename NoDuplicates<Collection<Tail...>>::Result;
    using L2 = typename Erase<T,L1>::Result;
public:
    using Result = typename Glue<T, L2>::Result;
};
///////////////// LOKI ////////////////


  template <typename L>
  using Collect = typename NoDuplicates<L>::Result;

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
  using FakePinFromPin = typename CreatePin<L, Collection<>>::type ;


//===================Создаем список портов из фейковых пинов====================

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
  using PortListFromFakePin = Collect<typename Create<FakePinFromPin<L>, Collection<>>::type> ;

//================ Проверяем что нет одинаковых фейковых пинов в списке =======
  
  
  template<class T, class T1> struct IsUnique;
  
  template<typename T, typename T1, typename... Ts>
  struct IsUnique<T, Collection<T1,Ts...>>
  {
    static constexpr bool Result = std::is_same<T, T1>::value ? false : IsUnique<T, Collection<Ts...>>::Result ; 
  } ;
  
  template <class T>
  struct IsUnique<T, Collection<>>
  {
    static constexpr bool Result = true;
  } ;
  
  template<class T> struct CheckList ; 
  
  template<>
  struct CheckList<Collection<>> 
  {
    static constexpr bool Result = true ;
  };
    
  template <typename T, typename... Ts>
  struct CheckList<Collection<T,Ts...>> 
  {
    static constexpr bool Result = IsUnique<T, Collection<Ts...>>::Result ? CheckList<Collection<Ts...>>::Result : false;
  };
  

  
  
  //template<typename QueriedType, typename T, typename ... Types>
  //constexpr static auto IsUniqueType(Collection<T, Types...>)
 // {
//    auto result = false ;
//    constexpr bool match = std::is_same<T, QueriedType>::value;
//    if constexpr (sizeof...(Types) != 0U)
 //   {
 //     result =   match ? false : IsUniqueType<QueriedType>(Collection<Types...>());
  //  }
 //   else
 //   {
 //     result =  match ? false : true;
 //   }
 //   return result ;
 // }

  //template <typename T, typename... Ts>
 // constexpr static void Check(Collection<T, Ts...>)
 // {
 //   if constexpr (sizeof...(Ts) != 0U)
 //   {
 //     static_assert(IsUniqueType<T>(Collection<Ts...>()), "Беда") ;
 //     Check(Collection<Ts...>()) ;
 //   }
 // }

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
   
      static_assert(CheckList<FakePinFromPin<Collection<Type, Ts...>>>::Result, "Bad") ;
                    
      return List<value, PortListFromFakePin<Collection<Type, Ts...>>>();
    }

    __forceinline template< std::uint32_t value, typename Port, typename ...Ports>
    constexpr static void VisitorSetPorts(List<value, Collection<Port, Ports...>>)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      uint32_t result = GetValue<Port, value>(MyPins()) ;
      Port::Set(result) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        MyPins::template VisitorSetPorts<value, Ports...>(List<value, Collection<Ports...>>()) ;
      }
    }

    __forceinline template<typename Port, typename ...Ports>
    constexpr static void VisitorSetPorts(List<0U, Collection<Port, Ports...>>, std::uint32_t value)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      uint32_t result = GetValue<Port>(MyPins(), value) ;
      Port::Set(result) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        MyPins::template VisitorSetPorts<Ports...>(List<0U, Collection<Ports...>>(), value) ;
      }
    }

     __forceinline template< std::uint32_t value, typename Port, typename ...Ports>
    constexpr static void VisitorResetPorts(List<value, Collection<Port, Ports...>>)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      uint32_t result = GetValue<Port, value>(MyPins()) ;
      Port::Reset(result) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        MyPins::template VisitorResetPorts<value, Ports...>(List<value, Collection<Ports...>>()) ;
      }
    }
     
    __forceinline template<typename Port, typename ...Ports>
    constexpr static void VisitorResetPorts(List<0U, Collection<Port, Ports...>>, std::uint32_t value)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      uint32_t result = GetValue<Port>(MyPins(), value) ;
      Port::Reset(result) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        MyPins::template VisitorResetPorts<Ports...>(List<0U, Collection<Ports...>>(), value) ;
      }
    }


   __forceinline template< std::uint32_t value, typename Port, typename ...Ports>
    constexpr static void VisitorTogglePorts(List<value, Collection<Port, Ports...>>)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      uint32_t result = GetValue<Port, value>(MyPins()) ;
      Port::Toggle(result) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        MyPins::template VisitorTogglePorts<value, Ports...>(List<value, Collection<Ports...>>()) ;
      }
    }

   __forceinline template<typename Port, typename ...Ports>
    constexpr static void VisitorTogglePorts(List<0U, Collection<Port, Ports...>>, std::uint32_t value)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      uint32_t result = GetValue<Port>(MyPins(), value) ;
      Port::Toggle(result) ;
      if constexpr (sizeof ...(Ports) != 0U)
      {
        MyPins::template VisitorTogglePorts<Ports...>(List<0U, Collection<Ports...>>(), value) ;
      }
    }

public:
     static constexpr size_t size = sizeof ...(Ts) + 1U ;
     
    __forceinline template<std::uint32_t value = 0xffffffffU>
    constexpr static void Set()
    {
      VisitorSetPorts(CreatePortList<value>()) ;
    }

    __forceinline static void Set(std::uint32_t value)
    {
      VisitorSetPorts(CreatePortList<0U>(), value) ;
    }


    __forceinline template<std::uint32_t value = 0xffffffffU>
    constexpr static void Reset()
    {
      VisitorResetPorts(CreatePortList<value>()) ;
    }


    __forceinline static void Reset(std::uint32_t value)
    {
      VisitorResetPorts(CreatePortList<0>(), value) ;
    }

    __forceinline template<std::uint32_t value = 0xffffffffU>
    constexpr static void Toggle()
    {
      VisitorTogglePorts(CreatePortList<value>()) ;
    }


    __forceinline static void Toggle(std::uint32_t value)
    {
      VisitorTogglePorts(CreatePortList<0U>(), value) ;
    }
    
} ;


#endif //REGISTERS_PINSPACK_HPP
