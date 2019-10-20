//
// Created by Sergey on 20.10.2019.
//

#ifndef REGISTERS_CRITICALSECTIONGUARD_HPP
#define REGISTERS_CRITICALSECTIONGUARD_HPP

#include <cassert>
#include "criticalsectionguard.hpp" //for CriticalSectionGuard

template <typename T>
struct CriticalSectionGuard
{
  CriticalSectionGuard()
  {
    T::Lock() ;
  }

  ~CriticalSectionGuard()
  {
    T::UnLock() ;
  }
};

template <>
struct CriticalSectionGuard<int>
{
  CriticalSectionGuard()
  {

  }

  ~CriticalSectionGuard()
  {

  }
};
#endif //REGISTERS_CRITICALSECTIONGUARD_HPP
