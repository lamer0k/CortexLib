//
// timerobserver.hpp
// Created by Serge on 01.02.2020.
//

#ifndef REGISTERS_TIMEROBSERVER_HPP
#define REGISTERS_TIMEROBSERVER_HPP
#include "susudefs.hpp" // for __forceinline

template<typename... TObserver>
struct OverflowObservers
{
  __forceinline static void OnOverflow()
  {
    (TObserver::OnTimeout(), ...) ;
  }
} ;

template<typename... TObserver>
struct CcTimer1Observers
{
  __forceinline static void OnCaptureCompare()
  {
    (TObserver::OnCaptureCompare1(), ...) ;
  }
} ;

template<typename... TObserver>
struct CcTimer2Observers
{
  __forceinline static void OnCaptureCompare()
  {
    (TObserver::OnCaptureCompare2(), ...) ;
  }
} ;

template<typename... TObserver>
struct CcTimer3Observers
{
  __forceinline static void OnCaptureCompare()
  {
    (TObserver::OnCaptureCompare3(), ...) ;
  }
} ;

template<typename... TObserver>
struct CcTimer4Observers
{
  __forceinline static void OnCaptureCompare()
  {
    (TObserver::OnCaptureCompare4(), ...) ;
  }
} ;


#endif //REGISTERS_TIMEROBSERVER_HPP
