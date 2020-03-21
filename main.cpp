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

#include "spi.hpp"            //for Spi
#include "systemclock.hpp"     //for SystemClock
#include "susudefs.hpp"       //for __forceinline
#include "elinkdriver.hpp"    //for ElinkDriver
#include "display.hpp"        //for Display
#include "nvicregisters.hpp"  //for NVIC
#include "usart2registers.hpp" //for USART2
#include "adc1registers.hpp" //for ADC1
#include "adccommonregisters.hpp" //for ADCCommon
#include "application.hpp" //for Application
#include "hardwareadc.hpp"
#include "mlx90614.hpp" // for Mlx90614
#include "smbus.hpp" // for Smbus
#include "delaytimer.hpp" // for DelayTimer

//#include "flashwrapper.hpp"



using namespace std ;

constexpr std::uint32_t SysClock = 8000000U ;
constexpr std::uint32_t UartSpeed9600 = static_cast<std::uint32_t>(SysClock / 9600U) ;
constexpr std::size_t Uart2InterruptPosition = 38U - 32U ;
#include <cstddef>

extern "C"
{
int __low_level_init(void)
{
    //Switch on external 16 MHz oscillator
    RCC::CR::HSEON::On::Set() ;
    //while (!RCC::CR::HSERDY::Ready::IsSet())
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
        GPIOB::MODER::MODER8::Output,         //PortC.3 scl
        GPIOB::MODER::MODER9::Output,         //PortC.2 sda
        GPIOB::MODER::MODER13::Alternate,
        GPIOB::MODER::MODER15::Alternate
    >::Set() ;

    GPIOB::AFRHPack<
        GPIOB::AFRH::AFRH13::Af5,
        GPIOB::AFRH::AFRH15::Af5
    >::Set() ;

    GPIOB::BSRR::BS1::High::Write() ;

    // LED2 on PortC.9, LED3 on PortC.8, LED4 on PortC.5 so set PortC.5,8,9 as output
    // PortC.2 sda, PortC.3 scl  for Smbus
    GPIOC::MODERPack<
        GPIOC::MODER::MODER5::Output,
        GPIOC::MODER::MODER8::Output,
        GPIOC::MODER::MODER9::Output,
				GPIOC::MODER::MODER2::Input, //Busy
				GPIOC::MODER::MODER3::Output //Reset
    >::Set() ;

		// PortC.2 sda, PortC.3 scl  for Smbus
		GPIOB::OTYPERPack<
		        GPIOB::OTYPER::OT8::OutputOpenDrain,
						GPIOB::OTYPER::OT9::OutputOpenDrain
		        >::Set() ;

		GPIOB::BSRRPack<
		        GPIOB::BSRR::BS8::High,
						GPIOB::BSRR::BS9::High
		        >::Write() ;

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

   // TIM2::DIER::UIE::Enable::Set() ;
		TIM2::PSC::Write(8000) ;

    //******* UART
    USART2::BRR::Write(UartSpeed9600) ;
    USART2::CR1::UE::Enable::Set() ;
    NVIC::ISER1::Write(1U << Uart2InterruptPosition) ;

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


using ResetPin = Pin<Port<GPIOC>, 3U, PinWriteable> ;
using DcPin = Pin<Port<GPIOB>, 2U, PinWriteable> ;
using CsPin = Pin<Port<GPIOB>, 1U, PinWriteable> ;
using BusyPin = Pin<Port<GPIOC>, 2U, PinReadable> ;


using LcdDriverSpi = Spi<SPI2> ;
using LcdDriver = ElinkDriver<LcdDriverSpi, ResetPin, DcPin, CsPin, BusyPin, Attributes<BlackAndWhite>> ;

//extern const unsigned char gImage_4in2bc_b[];
//extern const unsigned char gImage_4in2bc_ry[];
//const int test =  10;
//static size_t value = 10 ;

using SdaPin = Pin<Port<GPIOB>, 9U, PinAlmighty> ;
using SclPin = Pin<Port<GPIOB>, 8U, PinWriteable> ;

using HardwareTimer5 = HardwareTimerBase<TIM5,TimerCountable, InterruptsList<>> ;

using Timer = DelayTimer<HardwareOverflowTimer<HardwareTimer5,OverflowObservers<>>,SysClock, 8> ;
using Bus = SmBus<Timer,SdaPin, SclPin> ;
using Temperature = Mlx90614<Bus>;



int main()
{

  auto temperatureAmbient = Temperature::GetTemperature(Temperature::TemperatureType::Ambient) ;
  Timer::Delay(1000000us) ;
	Application::Leds[0]->Toggle() ;
  Timer::Delay(1000ms) ;
	Application::Leds[1]->Toggle() ;
	Timer::Delay(1000000us) ;
	Application::Leds[0]->Toggle() ;
	Timer::Delay(2000000us) ;
	Application::Leds[1]->Toggle() ;


		// FlashWrapper::Lock() ;
  // FlashWrapper::Erase(reinterpret_cast<const std::size_t>(&test)) ;
  //**************ADC*****************
  ADC1::CR2::ADON::Enable::Set() ;
  Adc<ADC1>::SetChannels(18) ;
  ADC1::CR2::SWSTART::On::Set() ;
  // Application::HardwareUart::HandleInterrupt() ;
  const char* message = "Hello world!" ;
  Application::MyDriver::WriteData(reinterpret_cast<const std::uint8_t*>(message), strlen(message)) ;
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
 // Application::DurationTimer::Start() ;
  Application::DurationTimer::Execute() ;
// Application::AppCCHardwareTimer::HandleInterrupt() ;

  //for (int i = 0; i < 9 ; i++)
  {
    //SystemClock::SetDelayMs(1000) ;

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
    Application::DurationTimer::Execute() ;
    // Application::DelayTimer::SetDelay(16000*500) ;
    // PinsPack<Led1Pin, Led2Pin, Led3Pin, Led4Pin>::Reset() ;
      Application::Leds[0]->Toggle() ;
      Application::Leds[1]->Toggle() ;
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


