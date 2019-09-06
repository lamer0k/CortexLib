//#include <cstdint>            //for int types such as uint32_t
#include "gpioaregisters.hpp" //for Gpioa
#include "rccregisters.hpp"   //for RCC
#include "tim1registers.hpp"  //for TIM1


using namespace std ;

int main()
{
  
  RCC::AHB1ENR::GPIOAEN::Enable::Set() ;
  
  GPIOA::MODERPack<
          GPIOA::MODER::MODER15::Output,
          GPIOA::MODER::MODER14::Analog
  >::Set() ;

  if (GPIOA::MODERPack<
          GPIOA::MODER::MODER15::Output,
          GPIOA::MODER::MODER14::Analog
  >::IsSet() )
  {
    GPIOA::MODER::Set(0U) ;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  TIM1::CR1::CKD::Divider2::Set() ;
  if (TIM1::CR1::CKD::Divider2::IsSet())
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

  


  GPIOA::MODER::MODER15::Set(2U) ;
  test = GPIOA::MODER::MODER15::Get() ;
  
  auto i = GPIOA::IDR::Get() ;
  
  GPIOA::BSRRPack<GPIOA::BSRR::BR0::Reset,
              GPIOA::BSRR::BR4::Reset
              >::Set() ;
  
  
  return 0 ;
}

