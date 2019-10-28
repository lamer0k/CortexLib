//
// Created by Sergey on 26.10.2019.
//

#ifndef REGISTERS_ELINKDRIVER_HPP
#define REGISTERS_ELINKDRIVER_HPP

#include "susudefs.hpp"  //for __forceinline
#include "systemclock.hpp" //for SystemClock


template <typename Spi, typename ResetPin, typename DcPin, typename CsPin>
struct ElinkDriver
{
  __forceinline static void Reset()
  {
    ResetPin::Set() ;
    SystemClock::SetDelayMs(200) ;
    ResetPin::Reset() ;
    SystemClock::SetDelayMs(200) ;
    ResetPin::Set() ;
  }
};

#endif //REGISTERS_ELINKDRIVER_HPP
