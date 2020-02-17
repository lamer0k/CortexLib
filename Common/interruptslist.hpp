//
// Created by Serge on 19.01.2020.
//

#ifndef REGISTERS_INTERRUPTSLIST_HPP
#define REGISTERS_INTERRUPTSLIST_HPP

#include "susudefs.hpp" //for __forceinline

template<typename... Modules>
struct InterruptsList
{
  __forceinline static void OnInterrupt()
  {
    (Modules::HandleInterrupt(), ...) ;
  }
} ;
#endif //REGISTERS_INTERRUPTSLIST_HPP
