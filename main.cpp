//#include <cstdint>            //for int types such as uint32_t
#include "gpioaregisters.hpp" //for Gpioa
#include "gpiocregisters.hpp" //for Gpioc
#include "rccregisters.hpp"   //for RCC
#include <array>              //for std::array ;
#include "pin.hpp"            //for Pin
#include "Led.hpp"            //for Led
#include "port.hpp"           //for Port
#include "tim2registers.hpp"  //for TIM2
#include "tim5registers.hpp"  //for TIM5
#include "timer.hpp"          //for Timer
#include "susudefs.hpp"       //for __forceinline

using namespace std ;


using Led1Pin = Pin<GPIOA, 5U, PinWriteableConfigurable> ;
using Led2Pin = Pin<GPIOC, 5U, PinWriteableConfigurable> ;


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

  
int main()
{
  RCC::AHB1ENR::GPIOAEN::Enable::SetAtomic();
  RCC::AHB1ENR::GPIOCEN::Enable::SetAtomic() ;
  //RCC::APB1ENR::TIM2EN::Enable::Set() ;
  RCC::APB1ENR::TIM5EN::Enable::SetAtomic() ;
  
  Port<Led1Pin, Led2Pin>::SetOutput() ;
  Application::Leds[1]->Toggle() ;  
//  Application::durationTimer.Start();
  for (;;)
  {
    Application::DelayTimer::SetDelay(8000000) ;
 // Application::durationTimer.InterruptHandle() ;
    Application::Leds[0]->Toggle() ;  
    Application::Leds[1]->Toggle() ;    
    
  }


  //guide(0) =  [] { int x = 0 ;} ;
  //auto testGuide = guide(0) ;
  
  
  

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
  
  GPIOC::BSRRPack<GPIOC::BSRR::BR0::Disable,
              GPIOC::BSRR::BR4::Disable
              >::Write() ;
  
  return 0 ;
}

