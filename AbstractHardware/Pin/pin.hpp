//
// Created by SKolody on 17.10.2019.
//
#ifndef REGISTERS_PIN_HPP
#define REGISTERS_PIN_HPP

#include "susudefs.hpp"  //for __forceinline
#include <cinttypes>

struct PinConfigurable
{
};

struct PinReadable
{
};

struct PinWriteable
{
};

struct PinReadableConfigurable : PinReadable, PinConfigurable
{
};

struct PinWriteableConfigurable : PinWriteable, PinConfigurable
{
};

struct PinAlmighty : PinReadableConfigurable, PinWriteableConfigurable
{
};

template<typename Port, uint8_t pinNum, typename Interface,
				class = typename std::enable_if_t<(pinNum <= 15U)>>
struct Pin
{
		using PortType = Port;
		static constexpr std::uint32_t pin = pinNum;
		static_assert(pinNum <= 15U, "There are only 16 pins on port");

		__forceinline template<typename T = Interface, class = typename std::enable_if_t<std::is_base_of<PinWriteable, T>::value>>
		static void Set()
		{
				Port::Set(uint8_t(1U) << pinNum);
		}

		__forceinline template<typename T = Interface, class = typename std::enable_if_t<std::is_base_of<PinWriteable, T>::value>>
		static void Reset()
		{
				Port::Reset((uint8_t(1U) << (pinNum)));
		}

		__forceinline template<typename T = Interface, class = typename std::enable_if_t<std::is_base_of<PinWriteable, T>::value>>
		static void Toggle()
		{
				Port::Toggle(uint8_t(1U) << pinNum);
		}

		__forceinline template<typename T = Interface, class = typename std::enable_if_t<std::is_base_of<PinReadable, T>::value>>
		static auto Get()
		{
				return ((Port::Get() & (uint8_t(1U) << pinNum)) >> pinNum);
		}

		__forceinline template<typename T = Interface, class = typename std::enable_if_t<std::is_base_of<PinReadable, T>::value>>
		static auto IsSet()
		{
				return ((Port::Get() & (uint8_t(1U) << pinNum)) != 0);
		}


		__forceinline template<typename T = Interface, class = typename std::enable_if_t<std::is_same<PinConfigurable, T>::value>>
		static void SetAnalog()
		{
				Port::SetAnalog(pinNum);
		}

		__forceinline template<typename T = Interface, class = typename std::enable_if_t<std::is_base_of<PinReadableConfigurable, T>::value>>
		static void SetInput()
		{
				Port::SetInput(pinNum);
		}

		__forceinline template<typename T = Interface, class = typename std::enable_if_t<std::is_base_of<PinWriteableConfigurable, T>::value>>
		static void SetOutput()
		{
				Port::SetOutput(pinNum);
		}

		__forceinline template<typename T = Interface, class = typename std::enable_if_t<std::is_same<PinConfigurable, T>::value>>
		static void SetAlternate()
		{
				Port::SetAlternate(pinNum);
		}
};

#endif //REGISTERS_PIN_HPP
