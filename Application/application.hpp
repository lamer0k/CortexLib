//
// Created by Serge on 16.02.2020.
//

#ifndef REGISTERS_APPLICATION_HPP
#define REGISTERS_APPLICATION_HPP

#include "gpioaregisters.hpp" //for Gpioa
#include "gpiocregisters.hpp" //for Gpioc
#include "port.hpp"           //for Port
#include "pin.hpp"            //for Pin
#include "Led.hpp"            //for Led
#include "tim2registers.hpp"  //for TIM2
#include "tim1registers.hpp"  //for TIM5
#include "interruptslist.hpp" // for InterruptList
#include "timerobserver.hpp" //for OverflowObserver
#include "hardwaretimercc.hpp" //HardwareCcTimer
#include "hardwaretimerbase.hpp"          //for HardwareTimerBase
#include "hardwaretimeroverflow.hpp"          //for HardwareTimerOverflow
#include <array>              //for std::array
#include "uartdriver.hpp"
#include "usart2registers.hpp"
#include "uartobservers.hpp"
#include "uartdriverobservers.hpp" // for UartDriverTrasnmitCompleteObservers,

using Led1Pin = Pin<Port<GPIOA>, 5U, PinWriteableConfigurable> ;
using Led2Pin = Pin<Port<GPIOC>, 5U, PinWriteableConfigurable> ;
using Led3Pin = Pin<Port<GPIOC>, 8U, PinWriteable> ;
using Led4Pin = Pin<Port<GPIOC>, 9U, PinWriteable> ;


struct Test
{

  __forceinline static void OnTimeout()
  {
    //std::cout << Id << std::endl ;
  }
  __forceinline static void OnCaptureCompare1()
  {
    //std::cout << Stop << std::endl ;
  }

  __forceinline static void OnTransmitComplete()
  {

  }

  __forceinline static void OnDataReady()
  {

  }

  inline static constexpr std::uint32_t Id = 1;
};

template<typename Timer, typename CCTimer>
struct Test1
{

  __forceinline static void OnTimeout()
  {
    //std::cout << Id << std::endl ;
    Timer::Start() ;
  }

  __forceinline static void OnCaptureCompare1()
  {
    CCTimer::Stop() ;
  }

  __forceinline static void OnCaptureCompare2()
  {
    CCTimer::Stop() ;
  }


  inline static const std::uint32_t Id = 2 ;
};



class Application
{
  static constexpr Led<Led1Pin> Led1{} ;
  static constexpr Led<Led2Pin> Led2{} ;


public:

  struct OverflowTimer; //говорим, что будем использовать
  struct CaptureTimer1 ;
  struct CaptureTimer2 ;

  using AppHardwareTimer = HardwareTimerBase<TIM2, TimerCountable, InterruptsList<>> ;  //Прикручиваем этот список в аппаратному таймеру, который будет использоваться для расчета частоты
  using AppHardwareTimer1 = HardwareTimerBase<TIM1, TimerCcpableInterruptable, InterruptsList<>> ;  //Прикручиваем этот список в аппаратному таймеру, который будет использоваться для расчета частоты
  using AppCCHardwareTimer = HardwareCCTimerBase<AppHardwareTimer1, InterruptsList<CaptureTimer1, CaptureTimer2>> ;  //Прикручиваем этот список в аппаратному таймеру, который будет использоваться для расчета частоты

  struct DurationTimer : HardwareOverflowTimer<
      AppHardwareTimer,
      OverflowObservers<Test>
  >  {};

  struct CaptureTimer1 : HardwareCCxTimerBase<
      AppHardwareTimer1,
      CcTimer1Observers<Test, Test1<DurationTimer, CaptureTimer1>>,
  CC1
  >  {};

  struct CaptureTimer2 : HardwareCCxTimerBase<
      AppHardwareTimer,
      CcTimer2Observers<Test1<Test, CaptureTimer2>>,
  CC2
  >  {};

  static constexpr std::array<const ILed*, 2U> Leds
      {
          &Led1,
          &Led2,
      } ;

  struct HardwareUart ;
  struct MyDriver: UartDriver<HardwareUart, UartDriverTransmitCompleteObservers<Test>, UartDriverReceiveCompleteObservers<>> {};

  struct HardwareUart : HardwareUartBase<
      USART2,
      UartTxInterruptable,
      InterruptsList<
      HardwareUartTx<HardwareUart, UartTransmitObservers<MyDriver>>,
      HardwareUartTc<HardwareUart, UartTransmitCompleteObservers<MyDriver, Test>>
  >
  > {};

  // using  MyAppDriver = UartDriver<HardwareUart>;

  //struct TxUart : UartDriver<HardwareUart>::UartTx<UartDriver<HardwareUart>> {} ;
  //struct TcUart : MyAppDriver::UartTc<MyAppDriver, Test> {} ;

};

#endif //REGISTERS_APPLICATION_HPP
