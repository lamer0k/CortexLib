//
// Created by Sergey on 28.10.2019.
//

#ifndef REGISTERS_PINSPACK_HPP
#define REGISTERS_PINSPACK_HPP

#include "portslist.hpp" // for PortsList

template <typename Type, typename ...Ts>
struct PinsPack
{
  __forceinline inline static void Set()
  {
    SetPorts(PortsList()) ;
  }

  __forceinline inline static void Reset()
  {
    ResetPorts(PortsList()) ;
  }

//private:

  template <typename QueriedType>
  constexpr static std::uint32_t GetValue(PinsPack<Type, Ts...>)
  {

    std::uint32_t result = 0;
    if constexpr (sizeof ...(Ts) != 0)
    {
      using MyPins = PinsPack<Ts...> ;

      if constexpr (std::is_same<typename Type::PortType, QueriedType>::value)
      {
        constexpr std::uint32_t oldValue =  MyPins::template GetValue<QueriedType>(MyPins()) ;
        constexpr std::uint32_t newValue =  (1 << Type::pin) | (MyPins::template GetValue<QueriedType>(MyPins())) ;
        static_assert(oldValue != newValue, "There are the identical pins in the pin pack") ;

        result =   newValue ;

      }  else
      {
        result = MyPins::template GetValue<QueriedType>(MyPins()) ;
      }
    } else
    {
      using MyPins = PinsPack<Type> ;
      if constexpr (std::is_same<typename Type::PortType, QueriedType>::value)
      {
        result = ((1 << Type::pin) | MyPins::template GetValueLast<QueriedType>(MyPins())) ;
      } else
      {
        result =  MyPins::template GetValueLast<QueriedType>(MyPins()) ;

      }
    }
    return result ;
  }


  template <typename QueriedType>
  constexpr static std::uint32_t GetValueLast(PinsPack<Type>)
  {
    std::uint32_t result = 0;
    if constexpr (std::is_same<Type, QueriedType>::value)
    {
      result = (1 << Type::pinNum) ;

    }
    return result ;
  }


  __forceinline template<typename Port, typename ...Ports>
  constexpr static void SetPorts(TypesList<Port, Ports...>)
  {
    using MyPins = PinsPack<Type, Ts...> ;
    //constexpr std::uint32_t value = PinsPack::template GetValue<Port>(MyPins()) ;
    if constexpr (sizeof ...(Ports) != 0)
    {
      if constexpr (PinsPack::template GetValue<Port>(MyPins()) != 0)
      {
        Port::BSRR::Write(PinsPack::template GetValue<Port>(MyPins()));
        MyPins::template SetPorts<Ports...>(TypesList<Ports...>()) ;
      } else
      {
        MyPins::template SetPorts<Ports...>(TypesList<Ports...>()) ;
      }
    }
    else
    {
      MyPins::template SetPortsLast<Port>(TypesList<Port>()) ;
    }
  }

  __forceinline template<typename Port>
   static void SetPortsLast(TypesList<Port>)
  {
    using MyPins = PinsPack<Type, Ts...> ;
    if constexpr (PinsPack::template GetValue<Port>(MyPins()) != 0)
    {
      Port::BSRR::Write(MyPins::template GetValue<Port>(MyPins()));
    }
  }


    __forceinline template<typename Port, typename ...Ports>
    constexpr static void ResetPorts(TypesList<Port, Ports...>)
    {
      using MyPins = PinsPack<Type, Ts...> ;

      if constexpr (sizeof ...(Ports) != 0)
      {
       
        if constexpr ((PinsPack::template GetValue<Port>(MyPins()) << 16U) != 0)
        {
          Port::BSRR::Write((PinsPack::template GetValue<Port>(MyPins()) << 16U));
          MyPins::template ResetPorts<Ports...>(TypesList<Ports...>());
        } else
        {
          MyPins::template ResetPorts<Ports...>(TypesList<Ports...>()) ;
        }
      }
      else
      {
        MyPins::template ResetPortsLast<Port>(TypesList<Port>()) ;
      }
    }

    __forceinline template<typename Port>
    static void ResetPortsLast(TypesList<Port>)
    {
      using MyPins = PinsPack<Type, Ts...> ;
      if constexpr ((PinsPack::template GetValue<Port>(MyPins()) << 16U) != 0)
      {
        Port::BSRR::Write(MyPins::template GetValue<Port>(MyPins()) << 16U);
      }
    }
} ;


#endif //REGISTERS_PINSPACK_HPP
