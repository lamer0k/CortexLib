// Filename: mlx90614.hpp
// Created by by Sergey Kolody aka Lamerok on 12.03.2020.
//
// Copyright (c) 2020 Sergey Kolody All rights reserved.


#ifndef REGISTERS_MLX90614_HPP
#define REGISTERS_MLX90614_HPP

#include <tuple>


template<typename Bus>
struct Mlx90614
{
		enum class Errors
		{
				Ok = 0, ReadError = 1, DataError = 2
		};
		enum class TemperatureType
		{
				Ambient = 0, Object
		};

		static std::tuple<float, Errors> GetTemperature(TemperatureType type)
		{
				std::uint32_t result = 0U;
				float temperature = 0.0f;
				Bus::Start() ;
				Bus::WriteByte(AddressWrite);
				(type == TemperatureType::Ambient) ? Bus::WriteByte(Ram | AmbientTemperature) : Bus::WriteByte(
								Ram | ObjectTemperature);
				Bus::WriteByte(AddressRead);
				result = Bus::ReadByte();
				result += (Bus::ReadByte() << 8U);
				result += (Bus::ReadByte() << 16U);
				Bus::Stop() ;
				if ((result >= Msb) || (result == 0U)) //если ошибка
				{
						return std::make_tuple(0.0f, Errors::DataError);
				}
				else
				{
						temperature = static_cast<float>(result) * 0.02f;
						//temperature = (temperature >= 273.15f) ? (temperature - ZeroCelsius) : -(ZeroCelsius - temperature);
						return std::make_tuple(temperature, Errors::Ok);
				}
		}
private:
		static constexpr std::uint8_t AddressWrite = 0x00U;
		static constexpr std::uint8_t AddressRead = 0x01U;
		static constexpr std::uint8_t Ram = 0x00U;
		static constexpr std::uint8_t AmbientTemperature = 0x06U;
		static constexpr std::uint8_t ObjectTemperature = 0x07U;
		static constexpr std::uint32_t Msb = 0x8000U; //старший бит означает ошибку
		static constexpr float ZeroCelsius = 273.15f ;
};

#endif //REGISTERS_MLX90614_HPP
