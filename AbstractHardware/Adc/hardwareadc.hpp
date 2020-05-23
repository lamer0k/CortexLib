//
// Created by Serge on 26.02.2020.
//

#ifndef REGISTERS_HARDWAREADC_HPP
#define REGISTERS_HARDWAREADC_HPP

#include <cstddef>  // for size_t
#include "adc1registers.hpp"  // for ADC1
#include <tuple> // for make_tuple and get<>

template<typename ADC>
struct Adc
{

  static void SwitchOn()
  {
    ADC::CR2::ADON::Enable::Set() ;
  }

  static void SwitchOff()
  {
    ADC::CR2::ADON::Disable::Set() ;
  }

  static void StartConversion()
  {
    ADC::CR2::SWSTART::On::Set() ;
  }

  static bool IsReady()
  {
    return ADC::SR::EOC::ConversionComplete::IsSet() ;
  }

  static auto GetData()
  {
    return ADC::DR::Get() ;
  }

		template<auto ...Args>
		static auto ConfigureChannels()
		{
				constexpr auto ChannelsCount = sizeof ... (Args);
				ADC::SQR1::L::Set(ChannelsCount - 1);
				auto result = CalculateChannelValues<Args...>();

				ADC::SQR1::Set(std::get<0>(result));
				ADC::SQR2::Write(std::get<1>(result));
				ADC::SQR3::Write(std::get<2>(result));
				if constexpr (ChannelsCount > 1)
				{
						ADC1::CR1::SCAN::Enable::Set();
				}
				else
				{
						ADC1::CR1::SCAN::Disable::Set();
				}
		}

private:
  template<auto ...Args>
  constexpr static auto CalculateChannelValues()
  {
    auto channelsList = {Args...} ;
    ADC1::SQR3::Type result3 = 0 ;
    ADC1::SQR2::Type result2 = 0 ;
    ADC1::SQR1::Type result1 = 0 ;

    //constexpr auto result = make_tuple(result1, result2, result3) ;
    std::size_t index = 0U ;
    constexpr size_t ChannelsInRegisters = 6U ;
    constexpr size_t BitsPerChannel = 5U ;
    constexpr auto ChannelsCount = sizeof ... (Args) ;
		static_assert(ChannelsCount != 0, "Количество аргументов должно быть не 0") ;
    for (auto it: channelsList)
    {
      if (index < ChannelsInRegisters)
      {
        result3 |= (it << (index * BitsPerChannel)) ;
      }
      else if ((index < (ChannelsInRegisters * 2)) && (index >= ChannelsInRegisters))
      {
        result2 |= (it << ((index - ChannelsInRegisters) * BitsPerChannel)) ;
      } else if ((index < 16) && (index >= ChannelsInRegisters * 2))
      {
        result1 |= (it << ((index - ChannelsInRegisters * 2) * BitsPerChannel)) ;
      }
      index++;
    }
    return make_tuple(result1, result2, result3) ;
  }
};
#endif //REGISTERS_HARDWAREADC_HPP
