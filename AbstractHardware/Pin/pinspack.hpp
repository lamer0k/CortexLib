//
// Created by Sergey on 28.10.2019.
//

#ifndef REGISTERS_PINSPACK_HPP
#define REGISTERS_PINSPACK_HPP

#include <functional>
#include "portslist.hpp" // for PortsList

template <std::uint8_t value, typename... Types>
struct List{} ;


//====================================================
template <typename Type, typename ...Ts>
struct PinsPack
{
//private:
  
    using Pins = PinsPack<Type,Ts...> ;

    
    template<std::uint8_t value, typename Tport, typename ... Types>
    constexpr static auto CreatePortList(List<value, Tport, Types...>)
    {
        return Collect(List<value, Types...>(), List<value, Tport>());
    }
    

    template<std::uint8_t value, typename Tport, typename ... Types, typename ... T2>
    constexpr static auto Collect(List<value,Tport, Types...>, List<value,T2...> b) 
    {
        constexpr auto isUnique = IsUniqueType<Tport>(List<value,T2...>());
        if constexpr (sizeof...(Types) != 0)
        {
            if constexpr (!isUnique)
            {
                return Collect(List<value, Types...>(), List<value, T2...>());
            }
            else
            {
                 return Collect(List<value, Types...>(), List<value, T2..., Tport>());
            }
        }
        else 
        {
            if constexpr (!isUnique)
            {
                return List<value, T2...>();
            }
            else
            {
                return List<value, T2..., Tport>();
            }
        }
    }
    
 
    
    template<typename QueriedType, std::uint8_t value, typename T, typename ... Types>
    constexpr static auto IsUniqueType(List<value, T, Types...>)
    {
        auto result = false ;
        constexpr bool match = std::is_same<T, QueriedType>::value;
        if constexpr (sizeof...(Types) != 0)
        {
          result =   match ? false : IsUniqueType<QueriedType>(List<value, Types...>());               
        }
        else
        {
          result =  match ? false : true;                
        }
        return result ;        
    }
    
        
    //template <typename QueriedType>
   // constexpr static void Check()
   // {
   //   constexpr auto check = IsUniqueType<Type>(List<0, Type, Ts...>()) ;
   //   static_assert(check, "Pin the same:") ; 
  //    
  //  }

    

//========================================================================================

    template <typename QueriedType, std::uint32_t value>
    constexpr static auto GetValue(PinsPack<Type, Ts...>)
    {
      std::uint32_t result = 0U; 
            
      if constexpr (sizeof ...(Ts) != 0)
      {

        using MyPins = PinsPack<Ts...> ;
        
        if constexpr ((std::is_same<typename Type::PortType, QueriedType>::value) && ((value & 1) == 1))
        {
           result = ((1 << Type::pin) | (MyPins::template GetValue<QueriedType, (value >> 1) >(MyPins()))) ;             
        } 
        else 
        {
          result = MyPins::template GetValue<QueriedType, (value >> 1)>(MyPins()) ;          
        }
      } 
      else
      {
        using MyPins = PinsPack<Type> ;

        if constexpr ((std::is_same<typename Type::PortType, QueriedType>::value) && (value & 1) == 1)
        {
          result = (1 << Type::pin) ;
        } 
        else
        {

          result = 0;
        }
      }  
      return result ;
    }  


    template <typename QueriedType>
      constexpr static auto GetValue(PinsPack<Type, Ts...>, std::uint8_t value)
    {
      std::uint32_t result = 0U; 
      
      if constexpr (sizeof ...(Ts) != 0)
      {
        using MyPins = PinsPack<Ts...> ;
        using MyPins = PinsPack<Ts...> ;
        
        if ((std::is_same<typename Type::PortType, QueriedType>::value) && ((value & 1) == 1))
        {
           result = ((1 << Type::pin) | (MyPins::template GetValue<QueriedType>(MyPins(), (value >> 1) ))) ;             
        } 
        else 
        {
          result = MyPins::template GetValue<QueriedType>(MyPins(), (value >> 1)) ;          
        }
      } 
      else
      {
        using MyPins = PinsPack<Type> ;

        if ((std::is_same<typename Type::PortType, QueriedType>::value) && (value & 1) == 1)
        {
          result = (1 << Type::pin) ;
        } 
        else
        {

          result = 0;
        }
      }  
      return result ;
    }  

 
    __forceinline template<std::uint8_t value, typename Port, typename ...Ports>
     constexpr static void SetPorts(List<value, Port, Ports...>)
    {
         using MyPins = PinsPack<Type, Ts...> ;
       //  Check() ;
         constexpr uint32_t result = PinsPack::template GetValue<Port, value>(MyPins()) ;
         Port::Set(result) ;         
        
         
         if constexpr (sizeof ...(Ports) != 0)
         {
            MyPins::template SetPorts<value, Ports...>(List<value,Ports...>()) ;
         }
    }
     
    __forceinline template<typename Port, typename ...Ports>
      constexpr static void SetPorts(List<0, Port, Ports...>, std::uint8_t value)
    {
         using MyPins = PinsPack<Type, Ts...> ;
       //  Check() ;
         uint32_t result = PinsPack::template GetValue<Port>(MyPins(), value) ;
         Port::Set(result) ;
                  
        
         if constexpr (sizeof ...(Ports) != 0)
         {
            MyPins::template SetPorts<Ports...>(List<0,Ports...>(), value) ;
         }
    }

    //============================================
    __forceinline template<void(*Fn)(std::uint32_t value), typename Port, typename ...Ports>
      constexpr static void UpdatePorts(List<0, Port, Ports...>, std::uint8_t value)
    {
         using MyPins = PinsPack<Type, Ts...> ;
       //  Check() ;
         uint32_t result = PinsPack::template GetValue<Port>(MyPins(), value) ;
         
         
         (*Fn)(value) ;
                  
        
         if constexpr (sizeof ...(Ports) != 0)
         {
           MyPins::template UpdatePorts<Fn, Ports...>(List<0,Ports...>(), value) ;
         }
    }
    //============================================
    
     __forceinline template<std::uint8_t value, typename Port, typename ...Ports>
     constexpr static void ResetPorts(List<value, Port, Ports...>)
    {
         using MyPins = PinsPack<Type, Ts...> ;
       //  Check() ;
         constexpr uint32_t result = PinsPack::template GetValue<Port, value>(MyPins());
         Port::Reset(result) ;         
        
         
         if constexpr (sizeof ...(Ports) != 0)
         {
            MyPins::template ResetPorts<value, Ports...>(List<value,Ports...>()) ;
         }
    }
     
    __forceinline template<typename Port, typename ...Ports>
      constexpr static void ResetPorts(List<0, Port, Ports...>, std::uint8_t value)
    {
         using MyPins = PinsPack<Type, Ts...> ;
       //  Check() ;
         uint32_t result = PinsPack::template GetValue<Port>(MyPins(), value) ;
         Port::Reset(result) ;
                  
        
         if constexpr (sizeof ...(Ports) != 0)
         {
            MyPins::template ResetPorts<Ports...>(List<0,Ports...>(), value) ;
         }
    }


    __forceinline template<std::uint8_t value, typename Port, typename ...Ports>
    constexpr static void TogglePorts(List<value, Port, Ports...>)
    {
      using MyPins = PinsPack<Type, Ts...> ;
      //  Check() ;
      constexpr  uint32_t result = PinsPack::template GetValue<Port, value>(MyPins());
      Port::Toggle(result) ;


      if constexpr (sizeof ...(Ports) != 0)
      {
        MyPins::template TogglePorts<value, Ports...>(List<value,Ports...>()) ;
      }
    }

    __forceinline template<typename Port, typename ...Ports>
    constexpr static void TogglePorts(List<0, Port, Ports...>, std::uint8_t value)
    {
      using MyPins = PinsPack<Type, Ts...> ;
      //  Check() ;
      uint32_t result = PinsPack::template GetValue<Port>(MyPins(), value) ;
      Port::Toggle(result) ;


      if constexpr (sizeof ...(Ports) != 0)
      {
        MyPins::template TogglePorts<Ports...>(List<0,Ports...>(), value) ;
      }
    }

public:
   
  __forceinline template<std::uint8_t value = 0xff>  
  constexpr static void Set()
  {
    SetPorts(CreatePortList(List<value,typename Type::PortType, typename Ts::PortType...>())) ;
    
  }

  
  __forceinline static void Set(std::uint8_t value)
  {
    SetPorts(CreatePortList(List<0,typename Type::PortType, typename Ts::PortType...>()), value) ;
    //UpdatePorts<typename Type::PortType, &Type::PortType::Set>(CreatePortList(List<0,typename Type::PortType, typename Ts::PortType...>())) ;
  }

  __forceinline template<std::uint8_t value = 0xff>  
  constexpr static void Reset()
  {
    ResetPorts(CreatePortList(List<value,typename Type::PortType, typename Ts::PortType...>())) ;
  }

  __forceinline static void Reset(std::uint8_t value)
  {
    ResetPorts(CreatePortList(List<0,typename Type::PortType, typename Ts::PortType...>()), value) ;
  }

    __forceinline template<std::uint8_t value = 0xff>
    constexpr static void Toggle()
    {
      TogglePorts(CreatePortList(List<value,typename Type::PortType, typename Ts::PortType...>())) ;
    }

    __forceinline static void Toggle(std::uint8_t value)
    {
      TogglePorts(CreatePortList(List<0,typename Type::PortType, typename Ts::PortType...>()), value) ;
    }


} ;


#endif //REGISTERS_PINSPACK_HPP
