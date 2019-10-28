//
// Created by Sergey on 27.10.2019.
//

#ifndef REGISTERS_SYSTEMCLOCK_HPP
#define REGISTERS_SYSTEMCLOCK_HPP

struct SystemClock
{
  static constexpr std::uint32_t SystemCoreClock = 8'000'000U ;

  static void SetDelayMs(std::uint32_t ms)
  {
    std::uint32_t count  = ms * (SystemCoreClock/5000) ;
    for( ; count != 0; --count)
    {
    }
  }


};
#endif //REGISTERS_SYSTEMCLOCK_HPP
