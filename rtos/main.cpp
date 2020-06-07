#include "tasker.hpp"
#include "taskerconfig.hpp"
#include "stkregisters.hpp" // for STK

extern "C" 
{
 int __low_level_init(void)   
 {
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
