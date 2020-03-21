// Filename: hardwarei2c.hpp
// Created by by Sergey Kolody aka Lamerok on 14.03.2020.
//
// Copyright (c) 2020 Sergey Kolody All rights reserved.


#ifndef REGISTERS_HARDWARESMBUS_HPP
#define REGISTERS_HARDWARESMBUS_HPP

#include "susudefs.hpp" // for __forceinline
//#include "i2c1registers.hpp" //FIXME for I2c2

struct SmBusInterruptable
{
};


template<typename SmBusModule, typename Interface, typename InterruptsList>
struct HardwareSmBusBase
{
		__forceinline void Init()
		{
				SmBusModule::CR1Pack <
				  SmBusModule::CR1::SMBUS::SmBusMode,
				  SmBusModule::CR1::SMBTYPE::Host
				  SmBusModule::CR1::ACK::Acknowledge
				>::Set() ;

				SmBusModule::OAR1::ADD7::Set(0x01U);
				SmBusModule::OAR1::ADDMODE::Bits7::Set();
				SmBusModule::CCRPack<
				        SmBusModule::CCR::DUTY::DutyCycles_2,
				        SmBusModule::CCR::F_S::FastMode
				        >::Set() ;

		}

		__forceinline std::uint16_t ReadWord()
		{
			while 
		}
};

#endif //REGISTERS_HARDWARESMBUS_HPP
