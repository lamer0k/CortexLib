#pragma once

#include "scbregisters.hpp"  // for SCB
#include "susudefs.hpp"      // for forceinline 

inline constexpr bool CORTEXM = true;

__forceinline inline static void IsrExitProceed()
{
	SCB::ICSR::PENDSVSET::PendingState::Set();
}