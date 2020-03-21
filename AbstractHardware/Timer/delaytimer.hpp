// Filename: delaytimer.hpp
// Created by by Sergey Kolody aka Lamerok on 12.03.2020.
//
// Copyright (c) 2020 Sergey Kolody All rights reserved.


#ifndef REGISTERS_DELAYTIMER_HPP
#define REGISTERS_DELAYTIMER_HPP

#include <chrono> // for std::chrono::microseconds
#include "susudefs.hpp" //for __forceinline

template<typename OverflowTimer, std::uint32_t ClockSpeed, std::uint32_t devider>
struct DelayTimer
{
		__forceinline static void Delay(std::chrono::microseconds timeout)
		{
			//static constexpr std::uint32_t clockRatio = ClockSpeed/timeout ;
		  using TicksPerUseconds = std::chrono::duration<std::uint32_t , std::ratio<devider, ClockSpeed>> ;
		  auto delay = std::chrono::duration_cast<TicksPerUseconds>(timeout).count();
			assert(delay > 1) ;
			OverflowTimer::SetDevider(devider) ;
			OverflowTimer::SetDelay(delay) ;
			OverflowTimer::Execute() ;

		}

};

#endif //REGISTERS_DELAYTIMER_HPP
