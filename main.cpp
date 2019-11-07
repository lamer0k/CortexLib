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
#include "timer.hpp"          //for Timer
#include "spi.hpp"            //for Spi
#include "systemclock.hpp"     //for SystemClock
#include "susudefs.hpp"       //for __forceinline
#include "elinkdriver.hpp"    //for ElinkDriver
#include "display.hpp"


using namespace std ;
extern Font Font24;
extern Font Font48;

using Led1Pin = Pin<Port<GPIOA>, 5U, PinWriteableConfigurable> ;
using Led2Pin = Pin<Port<GPIOC>, 5U, PinWriteableConfigurable> ;
using Led3Pin = Pin<Port<GPIOC>, 8U, PinWriteable> ;
using Led4Pin = Pin<Port<GPIOC>, 9U, PinWriteable> ;


struct Test : ISubscriber
{
  constexpr explicit Test(std::uint32_t id): Id{id} {} ;
  __forceinline void Update() const override
  {
    //std::cout << Id << std::endl ;
  }
  
  const std::uint32_t Id;
};

struct Test1 : ISubscriber
{
  constexpr explicit Test1(std::uint32_t id): Id{id} {} ;
  __forceinline void Update() const override
  {
    //std::cout << Id << std::endl ;
  }
  
  const std::uint32_t Id;
};

Test test{1} ;
constexpr Test1 test1{2} ;


class Application
{
  static constexpr Led<Led1Pin> Led1{} ;
  static constexpr Led<Led2Pin> Led2{} ;


public:
  using DurationTimer = Timer<TIM2, TimerCountableInterruptable, &test1, &test> ;
  using DelayTimer = Timer<TIM5, TimerCountable> ;
  //static constexpr DurationTimer durationTimer{test} ;
  static constexpr DurationTimer durationTimer{} ;
  static constexpr DelayTimer delayTimer{} ;
  static constexpr std::array<const ILed*, 2U> Leds 
  {
    &Led1,
    &Led2,
  } ;
  
};

struct Interrupt
{
  static void Update()
  {
    Application::durationTimer.InterruptHandle() ;
  }
};


extern "C"
{
int __low_level_init(void)
{
  //Switch on external 16 MHz oscillator
  RCC::CR::HSEON::On::Set() ;
  while (!RCC::CR::HSERDY::Ready::IsSet())
  {

  }
  //Switch system clock on external oscillator
  RCC::CFGR::SW::Hse::Set() ;
  while (!RCC::CFGR::SWS::Hse::IsSet())
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
    RCC::APB1ENR::SPI2EN::Enable
    >::Set() ;
  
  // LED1 on PortA.5, set PortA.5 as output
  GPIOA::MODER::MODER5::Output::Set() ;
  // PortB.13 - SPI3_CLK, PortB.15 - SPI2_MOSI, PB1 -CS, PB2- DC, PB8 -Reset 
  GPIOB::MODERPack<
    GPIOB::MODER::MODER1::Output,         //CS
    GPIOB::MODER::MODER2::Output,         //DC 
    GPIOB::MODER::MODER8::Output,         //Reset
    GPIOB::MODER::MODER9::Input,         //Busy
    GPIOB::MODER::MODER13::Alternate,
    GPIOB::MODER::MODER15::Alternate,
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
  return 1;
}
}

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
   
  //RCC::APB1ENR::TIM2EN::Enable::Set() ;

 // Port<Led1Pin, Led2Pin>::SetOutput() ;
 // Application::Leds[1]->Toggle() ;  
 
  LcdDriver::Init() ;
  LcdDriver::Clear() ;
  //LcdDriver::Display(gImage_4in2bc_b, gImage_4in2bc_b);
  //LcdDriver::SetPartialWindow(gImage_4in2bc_b, 0, 0, 400, 300) ;
  //for (int i = 0; i < 9 ; i++)
  {
    Point point; 
    point.x  = 200;
    point.y = 10 ;
    //Display<400,300>::SetPixel(point, Color::White) ;
    Display<400,300>::DrawChar(point, '0', Font48, Color::White, Color::Black) ;
    LcdDriver::SetPartialWindow(Display<400, 300>::image.data(), 0, 0, 400, 300) ;    
  //  LcdDriver::SetPartialWindow(Fly, i, 0, 100, 100) ;
    SystemClock::SetDelayMs(1000) ;
    
    Display<400,300>::DrawChar(point, '1', Font48, Color::White, Color::Black) ;
    LcdDriver::SetPartialWindow(Display<400, 300>::image.data(), 0, 0, 400, 300) ;    
    SystemClock::SetDelayMs(1000) ;
    Display<400,300>::DrawChar(point, '2', Font48, Color::White, Color::Black) ;
    
    
  }
  LcdDriver::SetPartialWindow(Display<400, 300>::image.data(), 0, 0, 400, 300) ;    
  //LcdDriver::Display(gImage_4in2bc_ry, gImage_4in2bc_b);
  for (;;)
  {
    SystemClock::SetDelayMs(1000) ;
    Pins<Led1Pin, Led2Pin, Led3Pin, Led4Pin>::Set() ;
    PinsPack<Led1Pin, Led2Pin, Led3Pin, Led4Pin>::Set() ;
   // GPIOA::BSRR::Write(32U) ;
   // GPIOC::BSRR::Write(800U) ;
    SystemClock::SetDelayMs(1000) ;
    PinsPack<Led1Pin, Led2Pin, Led3Pin, Led4Pin>::Reset() ;
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

