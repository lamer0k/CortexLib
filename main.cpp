//#include <cstdint>            //for int types such as uint32_t
#include "gpioaregisters.hpp" //for Gpioa
#include "rccregisters.hpp"   //for RCC
#include "tim1registers.hpp"  //for TIM1
//#include "dioregisters.hpp"
//#include "timera0registers.hpp"


using namespace std ;

int main()
{
//  auto test = DIO::PAIN::Get() ;
//  auto res = DIO::P1IV::P1IVField::P1IV_2::IsSet() ;
 
//  res = DIO::P1IVPack<
//          DIO::P1IV::P1IVField::P1IV_2,
//          DIO::P1IV::P1IVField::P1IV_4
//          >::IsSet() ;
//  TIMER_A0::TAxCTL::ID::ID_0::Set() ;
  
//  TIMER_A0::TAxCCR1::TAxR::Set(10U) ;
//  auto res = Dio::P2Iv::P2IvField::P2Iv0::IsSet() ;
//  res = Dio::P2IvPack<
//          Dio::P2Iv::P2IvField::P2Iv0,
//          Dio::P2Iv::P2IvField::P2Iv10
//          >::IsSet() ;
//  TimerA0::Taxctl::Id::Id0::Set();
  
  RCC::AHB1ENR::GPIOAEN::Disable::Set() ;
  
  TIM1::CR1::CKD::Devider2::Set() ;
  if (TIM1::CR1::CKD::Devider2::IsSet())
  {
    TIM1::ARR::Set(10U) ;
    TIM1::CR1::CEN::Enable::Set() ;
  }
  
  TIM1::CR1::Set(10) ;
  auto reg = TIM1::CR1::Get() ;
  //reg = TIM1::EGR::Get() //ошибка, регистр только для чтения
  
  TIM1::CR1::CKD::Set(0b10) ; // в регистре CR1 бит 9 установится в 1, бит 8 в 0
  reg = TIM1::CR1::CEN::Get() ;
  
  TIM1::CR1::CEN::Enable::Set() ;
  
  TIM1::CR1Pack<TIM1::CR1::DIR::Upcounter,
                TIM1::CR1::CKD::Divider4,
                TIM1::CR1::CEN::Enable>::Set() ;
 
  GPIOA::MODER::MODER15::Output::Set() ;
  auto result = GPIOA::MODER::MODER15::Output::IsSet() ;
  GPIOA::MODER::Set(2U) ;
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

