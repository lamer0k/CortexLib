//#include <cstdint>            //for int types such as uint32_t
#include "gpioabitsfield.hpp" //for Gpioa Registers enums
#include "gpioaregisters.hpp" //for Gpioa

using namespace std ;

int main()
{
  Gpioa::Moder::Moder15::Output::Set() ;
  auto result = Gpioa::Moder::Moder15::Output::IsSet() ;
  Gpioa::Moder::Write(2U) ;
  auto test = Gpioa::Moder::Get() ;
  
  Gpioa::ModerPack<
          Gpioa::Moder::Moder15::Output,
          Gpioa::Moder::Moder14::Output
  >::Set() ;
  
  result = Gpioa::ModerPack<
          Gpioa::Moder::Moder15::Output,
          Gpioa::Moder::Moder14::Output
  >::IsSet() ;
  
  Gpioa::Moder::Moder15::Set(2U) ;
  test = Gpioa::Moder::Moder15::Get();
  
  return 0 ;
}

