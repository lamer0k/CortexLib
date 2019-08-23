//#include <cstdint>            //for int types such as uint32_t
//#include "gpioabitsfield.hpp" //for Gpioa Registers enums
//#include "gpioaregisters.hpp" //for Gpioa
#include "dioregisters.hpp"
#include "timera0registers.hpp"


using namespace std ;

int main()
{
  auto test = DIO::PAIN::Get() ;
  auto res = DIO::P1IV::P1IVField::P1IV_2::IsSet() ;
  
  res = DIO::P1IVPack<
          DIO::P1IV::P1IVField::P1IV_2,
          DIO::P1IV::P1IVField::P1IV_4
          >::IsSet() ;
  TIMER_A0::TAxCTL::ID::ID_0::Set() ;
  
  TIMER_A0::TAxCCR1::TAxR::Set(10U) ;
  //auto res = Dio::P2Iv::P2IvField::P2Iv0::IsSet() ;
  //res = Dio::P2IvPack<
  //        Dio::P2Iv::P2IvField::P2Iv0,
  //        Dio::P2Iv::P2IvField::P2Iv10
  //        >::IsSet() ;
  //TimerA0::Taxctl::Id::Id0::Set();
//  Gpioa::Moder::Moder15::Value1::Set() ;
//  auto result = Gpioa::Moder::Moder15::Value2::IsSet() ;
//  Gpioa::Moder::Write(2U) ;
//  auto test = Gpioa::Moder::Get() ;
//
//  Gpioa::ModerPack<
//          Gpioa::Moder::Moder15::Value1,
//          Gpioa::Moder::Moder14::Value2
//  >::Set() ;
//
//  result = Gpioa::ModerPack<
//          Gpioa::Moder::Moder15::Value3,
//          Gpioa::Moder::Moder14::Value1
//  >::IsSet() ;
//
//  Gpioa::Moder::Moder15::Set(2U) ;
//  test = Gpioa::Moder::Moder15::Get();
  
  return 0 ;
}

