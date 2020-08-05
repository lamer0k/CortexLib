// Filename: taskertypes.hpp
// Created by by Sergey Kolody aka Lamerok on 29.03.2020.
#include "taskerconfig.hpp" // for myTasker
#include "stkregisters.hpp" // for STK
#include "rccregisters.hpp" // for RCC
#include "gpioaregisters.hpp" // for GPIOA

extern "C" 
{
 int __low_level_init(void)   
 {
     RCC::AHB1ENR::GPIOCEN::Enable::Set() ;
     RCC::AHB1ENR::GPIOAEN::Enable::Set() ;
     GPIOA::MODER::MODER5::Output::Set() ;
     GPIOC::MODERPack<
         GPIOC::MODER::MODER8::Output,
         GPIOC::MODER::MODER9::Output,
         GPIOC::MODER::MODER5::Output
         >::Set() ;

     STK::LOAD::Write(16000000U/1000U - 1U) ;
     STK::VAL::Write(0U);
     STK::CTRLPack<
         STK::CTRL::ENABLE::Enable,
         STK::CTRL::CLKSOURCE::CpuClock,
         STK::CTRL::TICKINT::EnableInterrupt
         >::Set() ;
     return 1 ;
 }
}

int main()
{
 	myTasker::Start() ;
  	return 0;
}
