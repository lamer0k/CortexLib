//
// Created by Sergey on 28.10.2019.
//

#ifndef REGISTERS_PINSPACK_HPP
#define REGISTERS_PINSPACK_HPP

#include <functional>
#include "pinspack.hpp" // for PinsPack




namespace PinHelper
{
 
 template<typename ... Types> struct Collection 
 {
   static constexpr int size  =  (sizeof...(Types));   
 };
  struct NullType {};

  ///////////////// ?????????? ???? NoDuplicates ?? ?????????? LOKI ////////////////
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

//==== ??????? ?????? ??????? ????? ?? ?????? ??????? ????? ==============

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


//===================??????? ?????? ?????? ?? ???????? ?????====================

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

}
//==============================pass

struct pass
{
  __forceinline template<class ...T>
  constexpr pass(T...)
  {

  }
};


//====================================================
using namespace PinHelper ;
template <typename ...Ts>
struct PinsPack
{
    using Pins = PinsPack<Ts...> ;

  private:

    using  TPins =  typename NoDuplicates<Collection<Ts...>>::Result;
    static_assert(std::is_same<TPins, Collection<Ts...>>::value,
                  "Беда: Одинаковые пины в списке") ;
    using Ports = typename
    NoDuplicates<Collection<typename Ts::PortType...>>::Result;

    __forceinline template<class Q>
    constexpr static auto GetPortValue(std::size_t mask)
    {
      std::size_t result = 0;
      auto rmask = mask ;
      pass{(result |= ((std::is_same<Q, typename Ts::PortType>::value ? 1 : 0) & mask) * (1 << Ts::pin), mask>>=1)...};
      pass{(result |= ((std::is_same<Q, typename Ts::PortType>::value ? 1 : 0) & ~rmask) * ((1 << Ts::pin) << 16), rmask>>=1)...};
      return result;
    }

    __forceinline template<std::size_t value, typename Port, typename ...Ports>
    constexpr static void SetPorts(Collection<Port, Ports...>)
    {
      Port::Set(GetPortValue<Port>(value)) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        Pins::template SetPorts<value, Ports...>(Collection<Ports...>()) ;
      }
    }

    __forceinline template<typename Port, typename ...Ports>
    constexpr static void SetPorts(Collection<Port, Ports...>, std::size_t value)
    {
      Port::Set(GetPortValue<Port>(value)) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        Pins::template SetPorts<Ports...>(Collection<Ports...>(), value) ;
      }
    }

    template< std::size_t value, typename Port, typename ...Ports>
    constexpr static void ResetPorts(Collection<Port, Ports...>)
    {
      Port::Reset(GetPortValue<Port>(value)) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        Pins::template ResetPorts<value, Ports...>(Collection<Ports...>()) ;
      }
    }
     
    __forceinline template<typename Port, typename ...Ports>
    constexpr static void ResetPorts(Collection<Port, Ports...>, std::size_t value)
    {
      Port::Reset(GetPortValue<Port>(value)) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        Pins::template ResetPorts<Ports...>(Collection<Ports...>(), value) ;
      }
    }


   __forceinline template< std::size_t value, typename Port, typename ...Ports>
    constexpr static void TogglePorts(Collection<Port, Ports...>)
    {
      Port::Toggle(GetPortValue<Port>(value)) ;

      if constexpr (sizeof ...(Ports) != 0U)
      {
        Pins::template TogglePorts<value, Ports...>(Collection<Ports...>()) ;
      }
    }

   __forceinline template<typename Port, typename ...Ports>
    constexpr static void TogglePorts(Collection<Port, Ports...>, std::size_t value)
    {
      Port::Toggle(GetPortValue<Port>(value)) ;
      if constexpr (sizeof ...(Ports) != 0U)
      {
        Pins::template TogglePorts<Ports...>(Collection<Ports...>(), value) ;
      }
    }

public:
     static constexpr size_t size = sizeof ...(Ts) + 1U ;
     
    __forceinline template<std::size_t value = 0xffffffffU>
    constexpr static void Set()
    {
      SetPorts<value>(Ports()) ;
    }

    __forceinline static void Set(std::size_t value)
    {
      SetPorts(Ports(), value) ;
    }


    __forceinline template<std::size_t value = 0xffffffffU>
    constexpr static void Reset()
    {
      ResetPorts<value>(Ports()) ;
    }


    __forceinline static void Reset(std::size_t value)
    {
      ResetPorts(Ports(), value) ;
    }

    __forceinline template<std::size_t value = 0xffffffffU>
    constexpr static void Toggle()
    {
      TogglePorts<value>(Ports()) ;
    }


    __forceinline static void Toggle(std::size_t value)
    {
      TogglePorts(Ports(), value) ;
    }
    
} ;


#endif //REGISTERS_PINSPACK_HPP
