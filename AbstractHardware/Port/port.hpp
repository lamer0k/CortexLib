//
// Created by SKolody on 17.10.2019.
//

#ifndef REGISTERS_PORT_HPP
#define REGISTERS_PORT_HPP

template<typename ...Pins>
struct Port{
  
  __forceinline inline static void Toggle()
  {
    Pass((Pins::Toggle(), true)...) ;
  }
  
  __forceinline inline static void Set()
  {
    Pass((Pins::Set(), true)...) ;
  }
  
  __forceinline inline static void Reset()
  {
    Pass((Pins::Reset(), true)...) ;
  }
  
  __forceinline inline static void SetOutput()
  {
    Pass((Pins::SetOutput(), true)...) ;
  }
  
  __forceinline inline static void SetInput()
  {
    Pass((Pins::SetInput(), true)...) ;
  }
  
  __forceinline inline static void SetAnalog()
  {
    Pass((Pins::SetInput(), true)...) ;
  }
  
  __forceinline inline static void SetAlternate()
  {
    Pass((Pins::SetInput(), true)...) ;
  }
  
private:
  __forceinline template<typename... Args>
  static void inline Pass(Args... ) //Вспомогательный метод для распаковки вариативного шаблона
  {
  }

} ;

#endif //REGISTERS_PORT_HPP
