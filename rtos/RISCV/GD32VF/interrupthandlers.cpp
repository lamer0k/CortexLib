//
// Created by Sergey Kolody aka Lamerok on 12.07.2020.
//

#include "interrupthandlers.hpp"
#include "intrinsics.h"

__interrupt void InterruptHandlers::TrapEntry()
{
	std::uintptr_t mcause = __read_csr(_CSR_MCAUSE);
	HandleTrap(mcause);
}

__interrupt void InterruptHandlers::IrqEntry()
{
	uintptr_t mcause = __read_csr(_CSR_MCAUSE);
	uintptr_t mepc = __read_csr(_CSR_MEPC);
	uintptr_t msubm = __read_csr(0x7C4);
	//asm("csrrw ra,0x7ED, ra");
	HandleTrap(mcause);

	__disable_interrupt();
	CallScheduler();

	__write_csr(_CSR_MCAUSE, mcause);
	__write_csr(_CSR_MEPC, mepc);
	__write_csr(0x7C4, msubm);
}

void InterruptHandlers::CallScheduler()
{
	__write_csr(_CSR_MEPC, reinterpret_cast<std::uintptr_t>(&Scheduler));
	__write_csr(_CSR_MEPC, 0x10);
	asm("mret");
}