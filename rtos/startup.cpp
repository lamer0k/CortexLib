#pragma language = extended
#pragma section = "CSTACK"

#include "taskertimersconfig.hpp" // For tRtosTimerService

extern "C" void __iar_program_start(void) ;

extern "C" void HandlePendSv() ;
extern "C" void HandleSvc() ;



class DummyModule
{
  public:
    static void HandleInterrupt() ;
} ;
using tInterruptFunction = void (*)() ;
using tInterruptVectorItem = union
{ 
  tInterruptFunction fun ;
  void * pPtr ;
} ;

// The vector table is normally located at address 0.
// When debugging in RAM, it can be located in RAM, aligned to at least 2^6.
// If you need to define interrupt service routines,
// make a copy of this file and include it in your project.
// The name "__vector_table" has special meaning for C-SPY:
// it is where the SP start value is found, and the NVIC vector
// table register (VTOR) is initialized to this address if != 0.

//#pragma section = ".intvec"
#pragma location = ".intvec"

// __vector_table is only used in startup file
const tInterruptVectorItem __vector_table[] =
{
  {
    .pPtr = __sfe( "CSTACK" ) //lint !e64
  },
    // Reset
    __iar_program_start,
  // Non maskable interrupt, Clock Security System
    DummyModule::HandleInterrupt,
    // All class of fault
    DummyModule::HandleInterrupt,
    // Memory management
    DummyModule::HandleInterrupt,
    // Pre-fetch fault, memory access fault
    DummyModule::HandleInterrupt,
    // Undefined instruction or illegal state
    DummyModule::HandleInterrupt,
    //Reserved
    0,
    0,
    0,
    0,
   // System Service call via SWI instruction
    HandleSvc,
    // Debug Monitor
    DummyModule::HandleInterrupt,
    // Reserved
    0,
    // Pendable request for system service
    HandlePendSv,
    // System tick timer
    tRtosTimerService::OnSystemTick,
    // External Interrupts

    // WindowWatchdog Interrupt
    DummyModule::HandleInterrupt,
    // PVD through EXTI line detection interrupt
    DummyModule::HandleInterrupt,
    // Tamper and TimeStamp interrupts through the EXTI line
    DummyModule::HandleInterrupt,
    // RTC Wakeup interrupt through the EXTI line
    DummyModule::HandleInterrupt,
    // Flash global interrupt
    DummyModule::HandleInterrupt,
    // RCC global interrupt
    DummyModule::HandleInterrupt,
    // EXTI Line0 interrupt
    DummyModule::HandleInterrupt,
    // EXTI Line1 interrupt
    DummyModule::HandleInterrupt,
  // EXTI Line2 interrupt
    DummyModule::HandleInterrupt,
    // EXTI Line3 interrupt
    DummyModule::HandleInterrupt,
    // EXTI Line4 interrupt
    DummyModule::HandleInterrupt,
    // DMA1 Stream0 global interrupt
    DummyModule::HandleInterrupt,
    // DMA1 Stream1 global interrupt
    DummyModule::HandleInterrupt,
    // DMA1 Stream2 global interrupt
    DummyModule::HandleInterrupt,
    // DMA1 Stream3 global interrupt
    DummyModule::HandleInterrupt,
    // DMA1 Stream4 global interrupt
    DummyModule::HandleInterrupt,
    // DMA1 Stream5 global interrupt
    DummyModule::HandleInterrupt,
    // DMA1 Stream6 global interrupt
    DummyModule::HandleInterrupt,
    // ADC1 global interrupt
     DummyModule::HandleInterrupt,
    // CAN1 TX interrupt
    DummyModule::HandleInterrupt,
    // CAN1 RX0 interrupt
    DummyModule::HandleInterrupt,
    // CAN1 RX1 interrupt
    DummyModule::HandleInterrupt,
    // CAN1 SCE interrupt
    DummyModule::HandleInterrupt,
    // EXTI Line[9:5] interrupts
    DummyModule::HandleInterrupt,
    // TIM1 Break interrupt and TIM9 global interrupt
    DummyModule::HandleInterrupt,
   // TIM1 update interrupt and TIM10 global interrupt
    DummyModule::HandleInterrupt,
    // TIM1 Trigger & Commutation interrupts and TIM11 global interrupt
    DummyModule::HandleInterrupt,
    // TIM1 Capture Compare interrupt
    DummyModule::HandleInterrupt,
    // TIM2 global interrupt
    DummyModule::HandleInterrupt,
    // TIM3 global interrupt
    DummyModule::HandleInterrupt,
    // TIM4 global interrupt
    DummyModule::HandleInterrupt,
    // I2C1 global event interrupt
    DummyModule::HandleInterrupt,
    // I2C1 global error interrupt
    DummyModule::HandleInterrupt,
    // I2C2 global event interrupt
    DummyModule::HandleInterrupt,
   // I2C2 global error interrupt
    DummyModule::HandleInterrupt,
    // SPI1 global interrupt
    DummyModule::HandleInterrupt,
    // SPI2 global interrupt
    DummyModule::HandleInterrupt,
     // USART1 global interrupt
    DummyModule::HandleInterrupt,
   // USART2 global interrupt
    DummyModule::HandleInterrupt,
    // USART3 global interrupt
    DummyModule::HandleInterrupt,
    // EXTI Line[15:10] interrupts
    DummyModule::HandleInterrupt,
    // EXTI Line 17 interrupt / RTC Alarms (A and B) through EXTI line interrupt
    DummyModule::HandleInterrupt,
    // EXTI Line 18 interrupt/USB On-The-Go FS Wakeup through EXTI line interrupt
    DummyModule::HandleInterrupt,
    // TIM8 Break interrupt TIM12 global interrupt
    DummyModule::HandleInterrupt,
    // TIM8 Update interrupt TIM13 global interrupt
    DummyModule::HandleInterrupt,
    // TIM8 Trigger & Commutation interrupt TIM14 global interrupt
    DummyModule::HandleInterrupt,
    // TIM8 Cap/Com interrupt
    DummyModule::HandleInterrupt,
    // DMA1 global interrupt Channel 7
    DummyModule::HandleInterrupt,
    // FSMC global interrupt
    DummyModule::HandleInterrupt,
    // SDIO global interrupt
    DummyModule::HandleInterrupt,
    // TIM5 global interrupt
    DummyModule::HandleInterrupt,
    // SPI3 global interrupt
    DummyModule::HandleInterrupt,
    // UART4 global interrupt
    DummyModule::HandleInterrupt,
   // UART5 global interrupt
    DummyModule::HandleInterrupt,
    // TIMER6, DAC1 and DAC2 global interrupt
    DummyModule::HandleInterrupt,
   // TIM7 global interrupt
    DummyModule::HandleInterrupt,
    // DMA2 Stream1 global interrupt
    DummyModule::HandleInterrupt,
   // DMA2 Stream2 global interrupt
    DummyModule::HandleInterrupt,
    // DMA2 Stream3 global interrupt
    DummyModule::HandleInterrupt,
    // DMA2 Stream4 global interrupt
    DummyModule::HandleInterrupt,
    // SD filter0 global interrupt
    DummyModule::HandleInterrupt,
    // SD filter1 global interrupt
    DummyModule::HandleInterrupt,
    // CAN2 TX interrupt
    DummyModule::HandleInterrupt,
    // BXCAN2 RX0 interrupt
    DummyModule::HandleInterrupt,
    // BXCAN2 RX1 interrupt
    DummyModule::HandleInterrupt,
    // CAN2 SCE interrupt
    DummyModule::HandleInterrupt,
    // USB On The Go FS global interrupt
    DummyModule::HandleInterrupt,
    // DMA2 Stream5 global interrupt,
    DummyModule::HandleInterrupt,
    // DMA2 Stream6 global interrupt
    DummyModule::HandleInterrupt,
    // DMA2 Stream7 global interrupt
    DummyModule::HandleInterrupt,
    // USART6 global interrupt
    DummyModule::HandleInterrupt,
    // I2C3 event interrupt
    DummyModule::HandleInterrupt,
    // I2C3 error interrupt
    DummyModule::HandleInterrupt,
    // CAN 3 TX interrupt
    DummyModule::HandleInterrupt,
    // BxCAN 3 RX0 interrupt
    DummyModule::HandleInterrupt,
    // BxCAN 3 RX1 interrupt
   DummyModule::HandleInterrupt,
    // CAN 3 SCE interrupt
    DummyModule::HandleInterrupt,
    // AES global interrupt
    DummyModule::HandleInterrupt,
    // RNG global interrupt
    DummyModule::HandleInterrupt,
    // FPU global interrupt
    DummyModule::HandleInterrupt,
    // UART7 global interrupt
    DummyModule::HandleInterrupt,
    // UART8 global interrupt
    DummyModule::HandleInterrupt,
    // SPI4 global interrupt
    DummyModule::HandleInterrupt,
    // SPI5 global interrupt
    DummyModule::HandleInterrupt,
    // SAI1 global interrupt
    DummyModule::HandleInterrupt,
    // UART9 global interrupt
    DummyModule::HandleInterrupt,
    // UART10 global interrupt
    DummyModule::HandleInterrupt,
    // Quad-SPI global interrupt
    DummyModule::HandleInterrupt,
    // I2CFMP1 event interrupt
    DummyModule::HandleInterrupt,
    // I2CFMP1 error interrupt
    DummyModule::HandleInterrupt,
    // LP Timer global interrupt or EXTI interrupt line 23
    DummyModule::HandleInterrupt,
    // DFSDM2 SD filter 0 global interrupt
    DummyModule::HandleInterrupt,
    // DFSDM2 SD filter 1 global interrupt
    DummyModule::HandleInterrupt,
    // DFSDM2 SD filter 2 global interrupt
    DummyModule::HandleInterrupt,
    // DFSDM2 SD filter 3 global interrupt
    DummyModule::HandleInterrupt
} ;

void DummyModule::HandleInterrupt()
{ 
  for( ; ;) 
  {
  }
}

extern "C" void __cmain(void) ;
extern "C" __weak void __iar_init_core(void) ;
extern "C" __weak void __iar_init_vfp(void) ;

#pragma required = __vector_table

void __iar_program_start(void)
{
  __iar_init_core() ;
  __iar_init_vfp() ;
  __cmain() ;
}
