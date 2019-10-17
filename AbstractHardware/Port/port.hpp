//
// Created by SKolody on 17.10.2019.
//

#ifndef REGISTERS_PORT_HPP
#define REGISTERS_PORT_HPP

__forceinline template<typename ...Pins>
struct Port{
  
  static void Toggle()
  {
    Pass((Pins::Toggle(), true)...) ;
  }
  
  static void Set()
  {
    Pass((Pins::Set(), true)...) ;
  }
  
  static void Reset()
  {
    Pass((Pins::Reset(), true)...) ;
  }
  
  static void SetOutput()
  {
    Pass((Pins::SetOutput(), true)...) ;
  }
  
  static void SetInput()
  {
    Pass((Pins::SetInput(), true)...) ;
  }
  
  static void SetAnalog()
  {
    Pass((Pins::SetInput(), true)...) ;
  }
  
  static void SetAlternate()
  {
    Pass((Pins::SetInput(), true)...) ;
  }
  
private:
  __forceinline template<typename... Args>
  static void inline Pass(Args... ) //Вспомогательный метод для распаковки вариативного шаблона
  {
  }

};



#endif //REGISTERS_PORT_HPP
