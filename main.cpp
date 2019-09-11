//#include <cstdint>            //for int types such as uint32_t
#include "gpioaregisters.hpp" //for Gpioa
#include "gpiobregisters.hpp" //for Gpioa
#include "rccregisters.hpp"   //for RCC
#include <array>              //for std::array ;
//#include "dioregisters.hpp"
//#include "timera0registers.hpp"

using namespace std ;

class IPin
{
public:
  virtual void Set() const = 0;
  virtual void Toggle() const = 0;
};

template<typename Port, uint8_t pinNum>
class Pin: public IPin
{
public:
  constexpr Pin() {}
  void Set() const  override
  {
    static_assert(pinNum <= 31U, "There are only 32 pins on port") ;
    Port::BSRR::Set(1U << pinNum) ;
  }
  
  void Toggle() const override
  {
    static_assert(pinNum <= 31U, "There are only 31 pins on port") ;
    Port::ODR::Toggle(1U << pinNum) ;
  }
} ;

class Led
{
public:
  constexpr Led(const IPin &pin): Pin(pin)
  {
  }
  __forceinline void Toggle() const
  {
    Pin.Toggle() ;
  }
private:
  const IPin &Pin;
};

constexpr Pin<GPIOA, 1U> Led1Pin;
constexpr Pin<GPIOB, 2U> Led2Pin;

std::array<Led,2U> Leds{Led{Led1Pin},
                        Led{Led2Pin}
                        };

int main()
{
  Leds[1].Toggle()  ;

  RCC::AHB1ENR::GPIOAEN::Enable::Set() ;
  
  RCC::AHB1ENR::GPIOAEN::Enable::Set() ;
  GPIOA::MODER::MODER15::Output::Set() ;  
  GPIOA::MODERPack<
          GPIOA::MODER::MODER12::Output,
          GPIOA::MODER::MODER14::Analog
  >::Set() ;
  //*******************************************

  // Включаем тактирование на порту GPIOA
  //Ошибка компиляции, у регистра APB1ENR нет поля GPIOAEN
  //RCC::APB1ENR::GPIOAEN::Enable::Set() ; 
  
  //Все хорошо, подали тактирование на порт GPIOA
  RCC::AHB1ENR::GPIOAEN::Enable::Set() ; 

  //Ошибка компиляции, RCC::APB2ENR::TIM1EN::Enable не 
  //является полем регистра APB1ENR
  //RCC::APB1ENRPack<RCC::APB1ENR::TIM2EN::Enable,
  //                 RCC::APB2ENR::TIM1EN::Enable>::Set();

  //Ошибка компиляции, регистр BSRR только для записи     
  //auto result = GPIOA::BSRR::Get() ; 

  //Ошибка компиляции, значение Reset только для записи
 // if (GPIOA::BSRR::BS1::Reset::IsSet())  
  {
     //do something
  }
   
  //Ошибка компиляции, значение поля регистра только для чтения
 // GPIOA::IDR::IDR5::On::Set()   
   
 
  GPIOA::MODER::MODER15::Output::Set() ;
  auto result = GPIOA::MODER::MODER15::Output::IsSet() ;
  GPIOA::MODER::Set(1U) ;
  auto test = GPIOA::MODER::Get() ;

  GPIOA::MODERPack<
          GPIOA::MODER::MODER15::Output,
          GPIOA::MODER::MODER14::Analog
  >::Set() ;

  result = GPIOA::MODERPack<
          GPIOA::MODER::MODER15::Output,
          GPIOA::MODER::MODER14::Analog
  >::IsSet() ; ;

  GPIOA::MODER::MODER15::Set(2U) ;
  test = GPIOA::MODER::MODER15::Get() ;
  
  auto i = GPIOA::IDR::Get() ;
  
  GPIOA::BSRRPack<GPIOA::BSRR::BR0::Reset,
              GPIOA::BSRR::BR4::Reset
              >::Set() ;
  
  
  return 0 ;
}

