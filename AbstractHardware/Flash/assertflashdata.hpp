
#if !defined(ASSERTFLASHDATA_HPP)
#define ASSERTFLASHDATA_HPP


//#include <intrinsics.h>     // For __enable_interrupt()
#include "criticalsectionconfig.hpp" // for CriticalSection
#include "Stm32Fxx/STM32F303/flashwrapper.hpp" // For FlashWrapper
#include "rmldefs.hpp"      // For RML types

constexpr tU16 maxMsgLength = tU16(512U) ;


#pragma location = ".assertdata"
constexpr tChar errorMessage[maxMsgLength] = "" ;

class AssertFlashData
{
  public:
    AssertFlashData() = delete ;
    
   
    inline static void Save(
      const tChar * const file,
      const tU32 line, 
      const tChar * const message)
    {
      CriticalSection cs ;
      
      tChar str[maxMsgLength] = "" ;
      
      const tS32 status = static_cast<tS32>(snprintf(
        str, //lint !e9132
        static_cast<size_t>(maxMsgLength), 
        "%s, %u: %s", 
        file, 
        line, 
        message)) ;
      
      if(status < tS32(0))
      {
        strncpy(str, "Cannot write error message", static_cast<size_t>(maxMsgLength)) ;
      }
      
      FlashWrapper::Unclock() ;
      
      FlashWrapper::Erase(reinterpret_cast<tU32>(errorMessage)) ;
      FlashWrapper::Unclock() ;
      
      FlashWrapper::Write(  str,  const_cast<tChar *>(errorMessage), static_cast<tU32>(std::strlen(str))) ;
    }
};

#endif //ASSERTFLASHDATA_HPP
