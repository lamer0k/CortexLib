//
// Created by Sergey on 20.10.2019.
//

#ifndef REGISTERS_ATOMICUTILS_HPP
#define REGISTERS_ATOMICUTILS_HPP

#include "intrinsics.h" // for __disable_interrupt()
#include <cstdint> //for std::uint32_t

template <typename T>
struct AtomicUtils
{
  static bool CompareExchange(volatile T* ptr, T oldValue, T newValue)
  {
    using namespace std ;
    // эксклюзивно читаем значение переменной и сравниваем со старым значением
    if(__LDREX(ptr) == static_cast<uint32_t>(oldValue))
    {
      // пытаемся эксклюзивно записать в переменную новое значение
      return (__STREX(static_cast<uint32_t>(newValue), static_cast<volatile uint32_t*>(ptr)) == 0) ;
    }
    __CLREX();
    return false;
  }

};

#endif //REGISTERS_ATOMICUTILS_HPP
