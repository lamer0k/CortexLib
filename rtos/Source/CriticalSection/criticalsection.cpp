// Filename: taskertypes.hpp
// Created by by Sergey Kolody aka Lamerok on 29.03.2020.
#include "criticalsection.hpp" // CriticalSection header file


CriticalSection::CriticalSection()
	: previousInterruptState(__get_interrupt_state())
{
	__disable_interrupt();
}

CriticalSection::~CriticalSection()
{
	__set_interrupt_state(previousInterruptState);
}
