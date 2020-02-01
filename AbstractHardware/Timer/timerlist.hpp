//
// Created by Serge on 19.01.2020.
//

#ifndef REGISTERS_TIMERLIST_HPP
#define REGISTERS_TIMERLIST_HPP

template<typename... Timers>
struct TimersList
{
  __forceinline static void HandleInterrupt()
  {
    (Timers::OnInterrupt(), ...) ;
  }

} ;
#endif //REGISTERS_TIMERLIST_HPP
