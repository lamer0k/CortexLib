// Filename: cachednvdata.hpp
// Created by lamerok  on 02.06.2021.

#pragma once

template<typename NvList, typename T, const T& defaultValue, const auto& nvDriver>
class CachedNvData
{
public:
	ReturnCode Set(T value) const
	{
		constexpr auto address = NvList::template GetAddress<NvList, T, defaultValue, nvDriver>();
		auto returnCode = nvDriver.Set(address, reinterpret_cast<const tNvData*>(&value), sizeof(T));
		if (returnCode)
		{
			T = value;
		}
		return returnCode;
	}

	T Get()
	{
		return data;
	}
private:
	inline static T data = defaultValue;
};
