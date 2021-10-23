// Filename: taskertypes.hpp
// Created by by Sergey Kolody aka Lamerok on 29.03.2020.

#pragma language = extended
#pragma section = "CSTACK"

#include "taskertimersconfig.hpp" // For tRtosTimerService

extern "C" void __iar_program_start(void);

extern "C" void HandlePendSv();
extern "C" void HandleSvc();

namespace InterruptHandler
{
__forceinline
inline static void DummyHandle()
{
	for (;;)
		{
		asm volatile("");
		}
}

__forceinline
inline static void SystemTimerHandle()
{
	myTasker::IsrEntry();
	tRtosTimerService::OnSystemTick();
	myTasker::IsrExit();
}

};
using tInterruptFunction = void (*)();
using tInterruptVectorItem = union
{
	tInterruptFunction fun;
	void *pPtr;
};

// The vector table is normally located at address 0.
// When debugging in RAM, it can be located in RAM, aligned to at least 2^6.
// If you need to define interrupt service routines,
// make a copy of this file and include it in your project.
// The name "__vector_table" has special meaning for C-SPY:
// it is where the SP start value is found, and the NVIC vector
// table register (VTOR) is initialized to this address if != 0.

//#pragma section = ".intvec"
#pragma location = ".intvec"

// __vector_table is only used in startup file
const tInterruptVectorItem __vector_table[] =
	{
		{
			.pPtr = __sfe("CSTACK") //lint !e64
		},
		// Reset
		__iar_program_start,
		// Non maskable interrupt, Clock Security System
		InterruptHandler::DummyHandle,
		// All class of fault
		InterruptHandler::DummyHandle,
		// Memory management
		InterruptHandler::DummyHandle,
		// Pre-fetch fault, memory access fault
		InterruptHandler::DummyHandle,
		// Undefined instruction or illegal state
		InterruptHandler::DummyHandle,
		//Reserved
		0,
		0,
		0,
		0,
		// System Service call via SWI instruction
		HandleSvc,
		// Debug Monitor
		InterruptHandler::DummyHandle,
		// Reserved
		0,
		// Pendable request for system service
		HandlePendSv,
		// System tick timer
		InterruptHandler::SystemTimerHandle,
		// External Interrupts

		// WindowWatchdog Interrupt
		InterruptHandler::DummyHandle,
		// PVD through EXTI line detection interrupt
		InterruptHandler::DummyHandle,
		// Tamper and TimeStamp interrupts through the EXTI line
		InterruptHandler::DummyHandle,
		// RTC Wakeup interrupt through the EXTI line
		InterruptHandler::DummyHandle,
		// Flash global interrupt
		InterruptHandler::DummyHandle,
		// RCC global interrupt
		InterruptHandler::DummyHandle,
		// EXTI Line0 interrupt
		InterruptHandler::DummyHandle,
		// EXTI Line1 interrupt
		InterruptHandler::DummyHandle,
		// EXTI Line2 interrupt
		InterruptHandler::DummyHandle,
		// EXTI Line3 interrupt
		InterruptHandler::DummyHandle,
		// EXTI Line4 interrupt
		InterruptHandler::DummyHandle,
		// DMA1 Stream0 global interrupt
		InterruptHandler::DummyHandle,
		// DMA1 Stream1 global interrupt
		InterruptHandler::DummyHandle,
		// DMA1 Stream2 global interrupt
		InterruptHandler::DummyHandle,
		// DMA1 Stream3 global interrupt
		InterruptHandler::DummyHandle,
		// DMA1 Stream4 global interrupt
		InterruptHandler::DummyHandle,
		// DMA1 Stream5 global interrupt
		InterruptHandler::DummyHandle,
		// DMA1 Stream6 global interrupt
		InterruptHandler::DummyHandle,
		// ADC1 global interrupt
		InterruptHandler::DummyHandle,
		// CAN1 TX interrupt
		InterruptHandler::DummyHandle,
		// CAN1 RX0 interrupt
		InterruptHandler::DummyHandle,
		// CAN1 RX1 interrupt
		InterruptHandler::DummyHandle,
		// CAN1 SCE interrupt
		InterruptHandler::DummyHandle,
		// EXTI Line[9:5] interrupts
		InterruptHandler::DummyHandle,
		// TIM1 Break interrupt and TIM9 global interrupt
		InterruptHandler::DummyHandle,
		// TIM1 update interrupt and TIM10 global interrupt
		InterruptHandler::DummyHandle,
		// TIM1 Trigger & Commutation interrupts and TIM11 global interrupt
		InterruptHandler::DummyHandle,
		// TIM1 Capture Compare interrupt
		InterruptHandler::DummyHandle,
		// TIM2 global interrupt
		InterruptHandler::DummyHandle,
		// TIM3 global interrupt
		InterruptHandler::DummyHandle,
		// TIM4 global interrupt
		InterruptHandler::DummyHandle,
		// I2C1 global event interrupt
		InterruptHandler::DummyHandle,
		// I2C1 global error interrupt
		InterruptHandler::DummyHandle,
		// I2C2 global event interrupt
		InterruptHandler::DummyHandle,
		// I2C2 global error interrupt
		InterruptHandler::DummyHandle,
		// SPI1 global interrupt
		InterruptHandler::DummyHandle,
		// SPI2 global interrupt
		InterruptHandler::DummyHandle,
		// USART1 global interrupt
		InterruptHandler::DummyHandle,
		// USART2 global interrupt
		InterruptHandler::DummyHandle,
		// USART3 global interrupt
		InterruptHandler::DummyHandle,
		// EXTI Line[15:10] interrupts
		InterruptHandler::DummyHandle,
		// EXTI Line 17 interrupt / RTC Alarms (A and B) through EXTI line interrupt
		InterruptHandler::DummyHandle,
		// EXTI Line 18 interrupt/USB On-The-Go FS Wakeup through EXTI line interrupt
		InterruptHandler::DummyHandle,
		// TIM8 Break interrupt TIM12 global interrupt
		InterruptHandler::DummyHandle,
		// TIM8 Update interrupt TIM13 global interrupt
		InterruptHandler::DummyHandle,
		// TIM8 Trigger & Commutation interrupt TIM14 global interrupt
		InterruptHandler::DummyHandle,
		// TIM8 Cap/Com interrupt
		InterruptHandler::DummyHandle,
		// DMA1 global interrupt Channel 7
		InterruptHandler::DummyHandle,
		// FSMC global interrupt
		InterruptHandler::DummyHandle,
		// SDIO global interrupt
		InterruptHandler::DummyHandle,
		// TIM5 global interrupt
		InterruptHandler::DummyHandle,
		// SPI3 global interrupt
		InterruptHandler::DummyHandle,
		// UART4 global interrupt
		InterruptHandler::DummyHandle,
		// UART5 global interrupt
		InterruptHandler::DummyHandle,
		// TIMER6, DAC1 and DAC2 global interrupt
		InterruptHandler::DummyHandle,
		// TIM7 global interrupt
		InterruptHandler::DummyHandle,
		// DMA2 Stream1 global interrupt
		InterruptHandler::DummyHandle,
		// DMA2 Stream2 global interrupt
		InterruptHandler::DummyHandle,
		// DMA2 Stream3 global interrupt
		InterruptHandler::DummyHandle,
		// DMA2 Stream4 global interrupt
		InterruptHandler::DummyHandle,
		// SD filter0 global interrupt
		InterruptHandler::DummyHandle,
		// SD filter1 global interrupt
		InterruptHandler::DummyHandle,
		// CAN2 TX interrupt
		InterruptHandler::DummyHandle,
		// BXCAN2 RX0 interrupt
		InterruptHandler::DummyHandle,
		// BXCAN2 RX1 interrupt
		InterruptHandler::DummyHandle,
		// CAN2 SCE interrupt
		InterruptHandler::DummyHandle,
		// USB On The Go FS global interrupt
		InterruptHandler::DummyHandle,
		// DMA2 Stream5 global interrupt,
		InterruptHandler::DummyHandle,
		// DMA2 Stream6 global interrupt
		InterruptHandler::DummyHandle,
		// DMA2 Stream7 global interrupt
		InterruptHandler::DummyHandle,
		// USART6 global interrupt
		InterruptHandler::DummyHandle,
		// I2C3 event interrupt
		InterruptHandler::DummyHandle,
		// I2C3 error interrupt
		InterruptHandler::DummyHandle,
		// CAN 3 TX interrupt
		InterruptHandler::DummyHandle,
		// BxCAN 3 RX0 interrupt
		InterruptHandler::DummyHandle,
		// BxCAN 3 RX1 interrupt
		InterruptHandler::DummyHandle,
		// CAN 3 SCE interrupt
		InterruptHandler::DummyHandle,
		// AES global interrupt
		InterruptHandler::DummyHandle,
		// RNG global interrupt
		InterruptHandler::DummyHandle,
		// FPU global interrupt
		InterruptHandler::DummyHandle,
		// UART7 global interrupt
		InterruptHandler::DummyHandle,
		// UART8 global interrupt
		InterruptHandler::DummyHandle,
		// SPI4 global interrupt
		InterruptHandler::DummyHandle,
		// SPI5 global interrupt
		InterruptHandler::DummyHandle,
		// SAI1 global interrupt
		InterruptHandler::DummyHandle,
		// UART9 global interrupt
		InterruptHandler::DummyHandle,
		// UART10 global interrupt
		InterruptHandler::DummyHandle,
		// Quad-SPI global interrupt
		InterruptHandler::DummyHandle,
		// I2CFMP1 event interrupt
		InterruptHandler::DummyHandle,
		// I2CFMP1 error interrupt
		InterruptHandler::DummyHandle,
		// LP Timer global interrupt or EXTI interrupt line 23
		InterruptHandler::DummyHandle,
		// DFSDM2 SD filter 0 global interrupt
		InterruptHandler::DummyHandle,
		// DFSDM2 SD filter 1 global interrupt
		InterruptHandler::DummyHandle,
		// DFSDM2 SD filter 2 global interrupt
		InterruptHandler::DummyHandle,
		// DFSDM2 SD filter 3 global interrupt
		InterruptHandler::DummyHandle
	};

extern "C" void __cmain(void);
extern "C" __weak void __iar_init_core(void);
extern "C" __weak void __iar_init_vfp(void);

#pragma required = __vector_table

void __iar_program_start(void)
{
	__iar_init_core();
	__iar_init_vfp();
	__cmain();
}
