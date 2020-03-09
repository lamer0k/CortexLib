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
    constexpr size_t BitsPerChannel = 5U ;
    constexpr auto ChannelsCount = sizeof ... (channels) ;
    if constexpr  (ChannelsCount != 0)
    {
      ADC::SQR1::L::Set(ChannelsCount - 1);
      ADC1::SQR3::Type result3 = 0 ;
      ADC1::SQR2::Type result2 = 0 ;
      ADC1::SQR1::Type result1 = ADC::SQR1::Get() ;

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
      ADC::SQR1::Write(result1) ;
      ADC::SQR2::Write(result2) ;
      ADC::SQR3::Write(result3) ;
    } else
    {
      assert(false) ;
    }

  }
};
#endif //REGISTERS_HARDWAREADC_HPP
