// Filename: nvlist.hpp
// Created by by Sergey Kolody  on 02.06.2021.
//
// Copyright (c) 2021 Metran All rights reserved.
#pragma once


template<const tNvAddress startAddress, const auto& ...args>
struct NvVarListBase
{
	template<typename NvList, typename T, const T& defaultValue, const auto& nvDriver>
	constexpr static size_t GetAddress()
	{
		return startAddr + GetAddressOffset<CaсhedNvData<NvList, T, defaultValue, nvDriver>>(NvVarListBase<startAddress, args...>());
	}
private:

	template<typename QueriedType, const auto& arg, const auto& ... args>
	constexpr static size_t	GetAddressOffset(NvVarListBase<startAddress, arg, args...>)
		{
			auto test = arg;
		if constexpr (std::is_same<decltype(test), QueriedType>::value)
		{
			return 0U;
		} else
		{
			return sizeof(decltype(test)) + GetAddressOffset<QueriedType>(NvVarListBase<startAddress, args...>());
		}
		}
	static constexpr tNvAddress	startAddr = startAddress;
};

