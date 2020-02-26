//
// Created by Serge on 26.02.2020.
//

#ifndef REGISTERS_ADC_HPP
#define REGISTERS_ADC_HPP

#include <cstddef>  // for size_t
#include "adc1registers.hpp"  // for ADC1

template<typename ADC>
struct Adc
{
  template<typename ...Args>
  void SetChannel(Args... channels)
  {
    auto channelsList = {channels...} ;
    std::size_t index = 0U ;
    constexpr size_t ChannelsInRegisters = 6U ;
    ADC1::SQR1::L::Set(sizeof ... (channels)) ;

    for (auto it: channelsList)
    {
      if (index < ChannelsInRegisters)
      {
        ADC1::SQR3::Set(it << (index * 5U) ;
      } else
      if ((index < (ChannelsInRegisters * 2)) && (index >= ChannelsInRegisters))
      {
        ADC1::SQR2::Set(it << ((index - ChannelsInRegisters) * 5U)) ;
      } else
      if ((index < 16) && (index >= ChannelsInRegisters * 2))
      {
        ADC1::SQR1::Set(it << ((index - ChannelsInRegisters * 2) * 5U)) ;
      }
    }
  }
};
#endif //REGISTERS_ADC_HPP
