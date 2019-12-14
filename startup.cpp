
#include "interrupthandler.hpp"  //for InterruptHandler

extern "C" void __iar_program_start(void) ;

using tIntFunct = void(*)();
using tIntVectItem = union {tIntFunct __fun; void * __ptr;};
#pragma segment = "CSTACK"
#pragma location = ".intvec"
const tIntVectItem __vector_table[] =
{
  { .__ptr = __sfe( "CSTACK" ) }, //????????????? ????????? ?? ????
    __iar_program_start, //????? ??????? ????? ????? ? ?????????

  InterruptHandler::DummyHandler,
  InterruptHandler::DummyHandler,
  InterruptHandler::DummyHandler,
  InterruptHandler::DummyHandler,
  InterruptHandler::DummyHandler,
  0,
  0,
  0,
  0,
  InterruptHandler::DummyHandler,
  InterruptHandler::DummyHandler,
  0,
  InterruptHandler::DummyHandler,
  InterruptHandler::DummyHandler,
  //External Interrupts
  InterruptHandler::DummyHandler,         //Window Watchdog
  InterruptHandler::DummyHandler,         //PVD through EXTI Line detect/EXTI16
  InterruptHandler::DummyHandler,   //Tamper and Time Stamp/EXTI21 
  InterruptHandler::DummyHandler,         //RTC Wakeup/EXTI22 
  InterruptHandler::DummyHandler,             //FLASH
  InterruptHandler::DummyHandler,               //RCC
  InterruptHandler::DummyHandler,         //EXTI Line 0
  InterruptHandler::DummyHandler,         //EXTI Line 1
  InterruptHandler::DummyHandler,         //EXTI Line 2
  InterruptHandler::DummyHandler,        //EXTI Line 3
  InterruptHandler::DummyHandler,         //EXTI Line 4
  InterruptHandler::DummyHandler,       //DMA1 Stream 0
  InterruptHandler::DummyHandler,       //DMA1 Stream 1
  InterruptHandler::DummyHandler,       //DMA1 Stream 2
  InterruptHandler::DummyHandler,       //DMA1 Stream 3
  InterruptHandler::DummyHandler,       //DMA1 Stream 4
  InterruptHandler::DummyHandler,      //DMA1 Stream 5
  InterruptHandler::DummyHandler,      //DMA1 Stream 6
  InterruptHandler::DummyHandler,              //ADC1
  0,   //USB High Priority
  0,    //USB Low  Priority
  0,               //DAC
  0,              //COMP through EXTI Line
  InterruptHandler::DummyHandler,         //EXTI Line 9..5
  InterruptHandler::DummyHandler,              //TIM9/TIM1 Break interrupt 
  InterruptHandler::DummyHandler,             //TIM10/TIM1 Update interrupt
  InterruptHandler::DummyHandler,             //TIM11/TIM1 Trigger/Commutation interrupts
  InterruptHandler::DummyHandler,			   //TIM1 Capture Compare interrupt
  InterruptHandler::Timer2Handler,         //TIM2  	
  InterruptHandler::DummyHandler,         //TIM3
  InterruptHandler::DummyHandler,        ////TIM4
};

extern "C" void __cmain(void) ;
extern "C" __weak void __iar_init_core(void) ;
extern "C" __weak void __iar_init_vfp(void) ;

#pragma required = __vector_table
void __iar_program_start(void) {
  __iar_init_core() ;
  __iar_init_vfp() ;
  __cmain() ;
}
