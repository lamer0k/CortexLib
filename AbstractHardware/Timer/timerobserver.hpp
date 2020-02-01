//
// timerobserver.hpp
// Created by Serge on 01.02.2020.
//

#ifndef REGISTERS_TIMEROBSERVER_HPP
#define REGISTERS_TIMEROBSERVER_HPP

template<typename... TObserver>
struct OverflowObservers
{
  __forceinline static void OnOverflow()
  {
    (TObserver::OnTimeOut(), ...) ;
  }

} ;

#endif //REGISTERS_TIMEROBSERVER_HPP
