//
// Created by Serge on 22.02.2020.
//

#ifndef REGISTERS_SYSTEMTIMER_HPP
#define REGISTERS_SYSTEMTIMER_HPP

template <typename ...Timers>
class RtosTimerService
{
public:
  static void OnSystemTick()
  {
    tRtos::IsrEntry() ;

    (Timers::OnTick(),...) ;

    tRtos::IsrExit() ;
  }
} ;

#endif //REGISTERS_SYSTEMTIMER_HPP
