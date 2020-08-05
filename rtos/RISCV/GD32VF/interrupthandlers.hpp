// Filename: InterruptHandlers.hpp
// Created by by Sergey Kolody  on 12.07.2020.

#pragma once
#include <cstdint>

extern void Scheduler() ;

using tInterruptFunction = void (*)() ;

extern tInterruptFunction gd_vector_base[] ;

struct InterruptHandlers
{
 public:
    __interrupt static void TrapEntry();
    __interrupt static void IrqEntry();
    static void CallScheduler() ;

private:
    static void  HandleTrap(std::uintptr_t mcause) 
    {
        tInterruptFunction fp;
        mcause &= 0xFFF;
        fp = gd_vector_base[mcause];
        if (fp != nullptr)
        {
            fp();
        }
    }
};


