//#include <cstdint>            //for int types such as uint32_t
#include "gpioaregisters.hpp" //for Gpioa
#include "gpiocregisters.hpp" //for Gpioc
#include "gpiobregisters.hpp" //for Gpiob
#include "rccregisters.hpp"   //for RCC
#include "spi2registers.hpp"   //for SPI2
#include <array>              //for std::array ;
#include "pin.hpp"            //for Pin
#include "pinspack.hpp"       //for PinsPack
#include "Led.hpp"            //for Led
#include "port.hpp"           //for Port
#include "tim2registers.hpp"  //for TIM2
#include "tim5registers.hpp"  //for TIM5
#include "hardwaretimerbase.hpp"          //for HardwareTimerBase
#include "hardwaretimeroverflow.hpp"          //for HardwareTimerOverflow
#include "spi.hpp"            //for Spi
#include "systemclock.hpp"     //for SystemClock
#include "susudefs.hpp"       //for __forceinline
#include "elinkdriver.hpp"    //for ElinkDriver
#include "display.hpp"        //for Display
#include "nvicregisters.hpp"  //for NVIC
#include "usart2registers.hpp" //for USART2
#include "subscriber.hpp"
#include "adc1registers.hpp" //for ADC1
#include "adccommonregisters.hpp" //for ADCCommon
#include "timerobserver.hpp" //for OverflowObserver
#include "interruptslist.hpp" // for InterruptList
#include "hardwaretimercc.hpp" //HardwareCcTimer
#include "uartdriver.hpp"
#include "usart2registers.hpp"
#include "hardwareuartbase.hpp"
#include "uartobserver.hpp"



using namespace std ;


extern "C"
{
int __low_level_init(void)
{
  //Switch on external 16 MHz oscillator
  RCC::CR::HSEON::On::Set() ;
  //while (!RCC::CR::HSERDY::Ready::IsSet())
  {

  }
  //Switch system clock on external oscillator
  RCC::CFGR::SW::Hse::Set() ;
  //while (!RCC::CFGR::SWS::Hse::IsSet())
  {

  }
  
  
  //Switch on clock on PortA and PortC, PortB
  RCC::AHB1ENRPack<
    RCC::AHB1ENR::GPIOCEN::Enable,
    RCC::AHB1ENR::GPIOAEN::Enable,
    RCC::AHB1ENR::GPIOBEN::Enable
    >::Set() ;
  
  RCC::APB1ENRPack<
    RCC::APB1ENR::TIM5EN::Enable,  
    RCC::APB1ENR::TIM2EN::Enable,  
    RCC::APB1ENR::SPI2EN::Enable,
    RCC::APB1ENR::USART2EN::Enable
    >::Set() ;
  

  GPIOA::MODERPack<
    GPIOA::MODER::MODER5::Output, // LED1 on PortA.5, set PortA.5 as output
    GPIOA::MODER::MODER2::Alternate, // Uart2 TX
    GPIOA::MODER::MODER3::Alternate  // Uart2 RX
  >::Set() ;

  GPIOA::AFRLPack <
    GPIOA::AFRL::AFRL2::Af7, // Uart2 TX
    GPIOA::AFRL::AFRL3::Af7  // Uart2 RX
    >::Set() ;



  //USART2::CR1::TE::Enable::Set() ;



  // PortB.13 - SPI3_CLK, PortB.15 - SPI2_MOSI, PB1 -CS, PB2- DC, PB8 -Reset 
  GPIOB::MODERPack<
    GPIOB::MODER::MODER1::Output,         //CS
    GPIOB::MODER::MODER2::Output,         //DC 
    GPIOB::MODER::MODER8::Output,         //Reset
    GPIOB::MODER::MODER9::Input,         //Busy
    GPIOB::MODER::MODER13::Alternate,
    GPIOB::MODER::MODER15::Alternate
    >::Set() ;
  
  GPIOB::AFRHPack<
    GPIOB::AFRH::AFRH13::Af5,
    GPIOB::AFRH::AFRH15::Af5
    >::Set() ;



  GPIOB::BSRR::BS1::High::Write() ;
  
  // LED2 on PortC.9, LED3 on PortC.8, LED4 on PortC.5 so set PortC.5,8,9 as output
  GPIOC::MODERPack<
    GPIOC::MODER::MODER5::Output,
    GPIOC::MODER::MODER8::Output,
    GPIOC::MODER::MODER9::Output
  >::Set() ;

  SPI2::CR1Pack<
    SPI2::CR1::MSTR::Master,   //SPI2 master
    SPI2::CR1::BIDIMODE::Unidirectional2Line,
    SPI2::CR1::DFF::Data8bit,
    SPI2::CR1::CPOL::High,
    SPI2::CR1::CPHA::Phase2edge,
    SPI2::CR1::SSM::NssSoftwareEnable,
    SPI2::CR1::SSI::Value1,
    SPI2::CR1::BR::PclockDiv2,
    SPI2::CR1::LSBFIRST::MsbFisrt,
    SPI2::CR1::CRCEN::CrcCalcDisable      
    >::Set() ;
  


   SPI2::CRCPR::CRCPOLY::Set(10U) ;    
   SPI2::CR1::SPE::Enable::Set() ;

   NVIC::ISER0::Write(1U << 28U) ;
   TIM2::PSC::Write(8000U) ;
   TIM2::DIER::UIE::Enable::Set() ;

   //********************ADC
   RCC::APB2ENR::ADC1EN::Enable::Set() ;
   ADC_Common::CCR::TSVREFE::Enable::Set() ;
   ADC1::CR2::EOCS::SingleConversion::Set() ;
   //84 cycles sample rate for channel 0
   ADC1::SMPR2::SMP0::Cycles84::Set() ;
   ADC1::SQR1::L::Conversions1::Set() ;
   ADC1::SQR3::SQ1::Channel18::Set() ;
   GPIOA::MODER::MODER0::Analog::Set() ;

  return 1;
}
}


struct Test
{

  __forceinline static void OnTimeOut()
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

  __forceinline static void OnTimeOut()
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


using Led1Pin = Pin<Port<GPIOA>, 5U, PinWriteableConfigurable> ;
using Led2Pin = Pin<Port<GPIOC>, 5U, PinWriteableConfigurable> ;
using Led3Pin = Pin<Port<GPIOC>, 8U, PinWriteable> ;
using Led4Pin = Pin<Port<GPIOC>, 9U, PinWriteable> ;

class Application
{
  static constexpr Led<Led1Pin> Led1{} ;
  static constexpr Led<Led2Pin> Led2{} ;


public:

  struct OverflowTimer; //говорим, что будем использовать
  struct CaptureTimer1 ;
  struct CaptureTimer2 ;

  using AppHardwareTimer = HardwareTimerBase<TIM2, TimerCountableInterruptable, InterruptsList<OverflowTimer, CaptureTimer2>> ;  //Прикручиваем этот список в аппаратному таймеру, который будет использоваться для расчета частоты
  using AppHardwareTimer1 = HardwareTimerBase<TIM1, TimerCcpableInterruptable, InterruptsList<>> ;  //Прикручиваем этот список в аппаратному таймеру, который будет использоваться для расчета частоты
  using AppCCHardwareTimer = HardwareCCTimerBase<AppHardwareTimer1, InterruptsList<CaptureTimer1, CaptureTimer2>> ;  //Прикручиваем этот список в аппаратному таймеру, который будет использоваться для расчета частоты

  struct DurationTimer : HardwareOverflowTimerBase<
      AppHardwareTimer,
      OverflowObservers<Test, Test1<DurationTimer, CaptureTimer1>>
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
  using MyDriver = UartDriver<HardwareUart, Test> ;

  struct HardwareUart : HardwareUartBase<
          USART2,
          UartTxInterruptable,
          InterruptsList<
            MyDriver::UartTx<MyDriver>,//TxUart,
            MyDriver::UartTc<MyDriver, Test>
          >
  > {};

 // using  MyAppDriver = UartDriver<HardwareUart>;
  
  //struct TxUart : UartDriver<HardwareUart>::UartTx<UartDriver<HardwareUart>> {} ;
  //struct TcUart : MyAppDriver::UartTc<MyAppDriver, Test> {} ;

};

struct Interrupt
{
  static void Update()
  {
    Application::DurationTimer::HandleInterrupt() ;
  }
};


using ResetPin = Pin<Port<GPIOB>, 8U, PinWriteable> ;
using DcPin = Pin<Port<GPIOB>, 2U, PinWriteable> ;
using CsPin = Pin<Port<GPIOB>, 1U, PinWriteable> ;
using BusyPin = Pin<Port<GPIOB>, 9U, PinReadable> ;


using LcdDriverSpi = Spi<SPI2> ;
using LcdDriver = ElinkDriver<LcdDriverSpi, ResetPin, DcPin, CsPin, BusyPin, Attributes<BlackAndWhite>> ;

//extern const unsigned char gImage_4in2bc_b[];
//extern const unsigned char gImage_4in2bc_ry[];


int main()
{

  //**************ADC*****************
  ADC1::CR2::ADON::Enable::Set() ;
  ADC1::CR2::SWSTART::On::Set() ;
  Application::HardwareUart::HandleInterrupt() ;
  const char* message = "Hello world" ;
  Application::MyDriver::WriteData(message, strlen(message)) ;
  while(ADC1::SR::STRT::NotStarted::IsSet())
  {

  } ;

  while(ADC1::SR::EOC::ConversionNotComplete::IsSet())
  {

  } ;

  const auto data = ADC1::DR::Get() ;
 
  LcdDriver::Init() ;
  LcdDriver::Clear() ;
 // LcdDriver::Display(gImage_4in2bc_b, gImage_4in2bc_b);
  //LcdDriver::SetPartialWindow(gImage_4in2bc_b, 0, 0, 400, 300) ;
  Point point{90U, 10U};
  Display<400,300>::DrawString(point, "Voltage: ") ;
  LcdDriver::UpdatePartialWindow(Display<400, 300>::image.data(), 0, 0, 400, 300) ;
  point.y = 100 ; 
  point.x = 130 ;

  Application::DurationTimer::SetDelay(1000) ;
  Application::DurationTimer::Start() ;
  Application::AppCCHardwareTimer::HandleInterrupt() ;

  //for (int i = 0; i < 9 ; i++)
  {
     SystemClock::SetDelayMs(1000) ;
     
     Display<400,300>::DrawString(point, "125.27") ;
     LcdDriver::UpdatePartialWindow(Display<400, 300>::image.data(), 0, 0, 400, 300) ;
     Display<400,300>::DrawString(point, "125.38") ;
     LcdDriver::UpdatePartialWindow(Display<400, 300>::image.data(), 0, 0, 400, 300) ;
     Display<400,300>::DrawString(point, "125.96") ;
     LcdDriver::UpdatePartialWindow(Display<400, 300>::image.data(), 0, 0, 400, 300) ;
     Display<400,300>::DrawString(point, "125.66") ;
     LcdDriver::UpdatePartialWindow(Display<400, 300>::image.data(), 0, 0, 400, 300) ;
  }
  //LcdDriver::SetPartialWindow(Display<400, 300>::image.data(), 0, 0, 400, 300) ;    
//  LcdDriver::Display(gImage_4in2bc_ry, gImage_4in2bc_b);

  for (;;)
  {
    //SystemClock::SetDelayMs(1000) ;
   // Application::DelayTimer::SetDelay(16000*500) ;
  //  Pins<Led1Pin, Led2Pin, Led3Pin, Led4Pin>::Set() ;
//    PinsPack<Led1Pin, Led2Pin, Led3Pin, Led4Pin>::Set() ;
   // GPIOA::BSRR::Write(32U) ;
   // GPIOC::BSRR::Write(800U) ;
   // SystemClock::SetDelayMs(1000) ;
   // Application::DelayTimer::SetDelay(16000*500) ;
   // PinsPack<Led1Pin, Led2Pin, Led3Pin, Led4Pin>::Reset() ;
  //  Application::Leds[0]->Toggle() ;
  //  Application::Leds[1]->Toggle() ;
  }

  GPIOA::MODER::MODER5::Output::Set() ;
  //GPIOA::MODERPack<
 //         GPIOA::MODER::MODER12::Output,
 //         GPIOA::MODER::MODER14::Analog
 // >::Set() ;
  
  //*******************************************
  //Включаем тактирование на порту GPIOA
  //Ошибка компиляции, у регистра APB1ENR нет поля GPIOAEN
  //RCC::APB1ENR::GPIOAEN::Enable::Set() ; 
  
  //Все хорошо, подали тактирование на порт GPIOA


  //Ошибка компиляции, RCC::APB2ENR::TIM1EN::Enable не 
  //является полем регистра APB1ENR
  //RCC::APB1ENRPack<RCC::APB1ENR::TIM2EN::Enable,
  //RCC::APB2ENR::TIM1EN::Enable>::Set() ;

  //Ошибка компиляции, регистр BSRR только для записи     
  //auto result = GPIOA::BSRR::Get() ; 

  //Ошибка компиляции, значение Reset только для записи
  // if (GPIOA::BSRR::BS1::Reset::IsSet())
  {
    //do something
  }
   
  //Ошибка компиляции, значение поля регистра только для чтения
  //GPIOA::IDR::IDR5::On::Set()
 
  GPIOA::MODER::MODER15::Output::Set() ;
  auto result = GPIOA::MODER::MODER15::Output::IsSet() ;
  

  auto testic = GPIOA::MODER::Get() ;

  GPIOC::MODERPack<
          GPIOC::MODER::MODER15::Output,
          GPIOC::MODER::MODER14::Analog
  >::Set() ;

  result = GPIOC::MODERPack<
          GPIOC::MODER::MODER15::Output,
          GPIOC::MODER::MODER14::Analog
  >::IsSet() ;

  GPIOC::MODER::MODER15::Set(2U) ;
  testic = GPIOC::MODER::MODER15::Get() ;
  
  const auto i = GPIOA::IDR::Get() ;
  
  GPIOC::BSRRPack<GPIOC::BSRR::BR0::Low,
              GPIOC::BSRR::BR4::Low
              >::Write() ;
  
  return 0 ;
}

