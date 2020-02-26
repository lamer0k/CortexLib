//
// Created by Serge on 26.02.2020.
//

#ifndef REGISTERS_HARDWAREADC_HPP
#define REGISTERS_HARDWAREADC_HPP

#include <cstddef>  // for size_t
#include "adc1registers.hpp"  // for ADC1

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

  template<typename ...Args>
  static void SetChannels(Args... channels)
  {
    auto channelsList = {channels...} ;
    std::size_t index = 0U ;
    constexpr size_t ChannelsInRegisters = 6U ;
    constexpr auto ChannelsCount = sizeof ... (channels) ;

    if constexpr  (ChannelsCount != 0)
    {
      ADC::SQR1::L::Set(ChannelsCount - 1);
      if constexpr (ChannelsCount > 1)
      {
        ADC1::CR1::SCAN::Enable::Set() ;
      } else
      {
        ADC1::CR1::SCAN::Disable::Set() ;
      }

      for (auto it: channelsList)
      {
        if (index < ChannelsInRegisters)
        {
          ADC1::SQR3::Set(it << (index * 5U));
        } else if ((index < (ChannelsInRegisters * 2)) && (index >= ChannelsInRegisters))
        {
          ADC1::SQR2::Set(it << ((index - ChannelsInRegisters) * 5U));
        } else if ((index < 16) && (index >= ChannelsInRegisters * 2))
        {
          ADC1::SQR1::Set(it << ((index - ChannelsInRegisters * 2) * 5U));
        }
        index++;
      }
    } else
    {
      assert(false) ;
    }

  }
};
#endif //REGISTERS_HARDWAREADC_HPP
