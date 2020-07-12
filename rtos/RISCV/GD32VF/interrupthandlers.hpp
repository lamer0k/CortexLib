// Filename: InterruptHandlers.hpp
// Created by by Sergey Kolody  on 12.07.2020.

#pragma once
#include <cstdint>

extern void Scheduler() ;
#define __interrupt ;

using tInterruptFunction = void (*)() ;

extern tInterruptFunction gd_vector_base[] ;

class InterruptHandlers
{
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

    static __interrupt void TrapEntry();
    static __interrupt void IrqEntry();
    static __interrupt void CallScheduler() ;
};


