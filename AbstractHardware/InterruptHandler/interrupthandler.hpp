//
// Created by Sergey on 21.11.2019.
//

#ifndef REGISTERS_INTERRUPTHANDLER_HPP
#define REGISTERS_INTERRUPTHANDLER_HPP

//#include "pin.hpp" //for Pin
#include "tim2registers.hpp"  //for TIM2
#include "gpiocregisters.hpp"  //for TIM2

class InterruptHandler {
  public:
    static void DummyHandler() { for(;;) {} }
    static void Timer2Handler()
    {
      //if (TIM2::SR::UIF::InterruptPending::IsSet())
     // {
     //   TIM2::SR::UIF::NoInterruptPending::Set();
     //   Pin<Port<GPIOC>, 8U, PinWriteable>::Toggle() ;
     // }
    }
};

#endif //REGISTERS_INTERRUPTHANDLER_HPP
