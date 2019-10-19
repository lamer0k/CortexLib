//#include <cstdint>            //for int types such as uint32_t
#include "gpioaregisters.hpp" //for Gpioa
#include "gpiobregisters.hpp" //for Gpioa
#include "rccregisters.hpp"   //for RCC
#include <array>              //for std::array ;
#include "pin.hpp"            //for Pin
#include "Led.hpp"            //for Led
#include "port.hpp"           //for Port
#include "tim2registers.hpp"  //for TIM2
#include "tim5registers.hpp"  //for TIM5
#include "timer.hpp"           //for Timer

using namespace std ;


using Led1Pin = Pin<GPIOA, 1U, PinWriteableConfigurable> ;
using Led2Pin = Pin<GPIOB, 2U, PinWriteableConfigurable> ;


struct Test : ISubscriber
{
  constexpr Test(std::uint32_t id): Id{id} {} ;
  __forceinline void Update() const override
  {
    //std::cout << Id << std::endl ;
  }
  
  const std::uint32_t Id;
};

struct Test1 : ISubscriber
{
  constexpr Test1(std::uint32_t id): Id{id} {} ;
  __forceinline void Update() const override
  {
    //std::cout << Id << std::endl ;
  }
  
  const std::uint32_t Id;
};

Test test{1} ;
constexpr Test1 test1{2} ;

template<auto* const ...args>
struct Notifier
{
  void Update() const
  {
    auto subscribers = {(ISubscriber*)(args)...} ;
    for (auto subscriber: subscribers)
    {
      subscriber->Update() ;
    }
  }
} ;



class Application
{
  static constexpr Led<Led1Pin> Led1{} ;
  static constexpr Led<Led2Pin> Led2{} ;
  using DurationTimer = Timer<TIM2, TimerCountableInterruptable, &test1, &test> ;
  using DelayTimer = Timer<TIM5, TimerCountable> ;

public:
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
    //Application::durationTimer.Update() ;
  }
};

  
Notifier<&test, &test1> notifyer;

int main()
{
  //notifyer.Update() ;
  Port<Led1Pin, Led2Pin>::SetOutput() ;
  Application::durationTimer.Start();
  Application::delayTimer.SetDelay(100) ;  
  Application::durationTimer.InterruptHandle() ;
  Application::Leds[1]->Toggle() ;
  
  //guide(0) =  [] { int x = 0 ;} ;
  //auto testGuide = guide(0) ;
  
  RCC::AHB1ENR::GPIOAEN::Enable::Set() ;
  
  RCC::AHB1ENR::GPIOAEN::Enable::Set() ;
  GPIOA::MODER::MODER15::Output::Set() ;  
  GPIOA::MODERPack<
          GPIOA::MODER::MODER12::Output,
          GPIOA::MODER::MODER14::Analog
  >::Set() ;
  
  //*******************************************
  //Включаем тактирование на порту GPIOA
  //Ошибка компиляции, у регистра APB1ENR нет поля GPIOAEN
  //RCC::APB1ENR::GPIOAEN::Enable::Set() ; 
  
  //Все хорошо, подали тактирование на порт GPIOA
  RCC::AHB1ENR::GPIOAEN::Enable::Set() ; 

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
  
  GPIOA::MODER::Set(1U) ;
  auto testic = GPIOA::MODER::Get() ;

  GPIOA::MODERPack<
          GPIOA::MODER::MODER15::Output,
          GPIOA::MODER::MODER14::Analog
  >::Set() ;

  result = GPIOA::MODERPack<
          GPIOA::MODER::MODER15::Output,
          GPIOA::MODER::MODER14::Analog
  >::IsSet() ;

  GPIOA::MODER::MODER15::Set(2U) ;
  testic = GPIOA::MODER::MODER15::Get() ;
  
  const auto i = GPIOA::IDR::Get() ;
  
  GPIOA::BSRRPack<GPIOA::BSRR::BR0::Reset,
              GPIOA::BSRR::BR4::Reset
              >::Write() ;
  
  return 0 ;
}

