//
// Created by Lamerok on 21.08.2019.
//

#ifndef REGISTERS_REGISTERTYPE_HPP
#define REGISTERS_REGISTERTYPE_HPP

#include <cstdint>           //for int types such as uint32_t

//Тип регистров в зависимости от размера
template <uint32_t size>
struct RegisterType {} ;

template<>
struct RegisterType<8>
{
  using Type = uint8_t ;
} ;

template<>
struct RegisterType<16>
{
  using Type = uint16_t ;
} ;

template<>
struct RegisterType<32>
{
  using Type = uint32_t ;
} ;

template<>
struct RegisterType<64>
{
  using Type = uint64_t ;
} ;

#endif //REGISTERS_REGISTERTYPE_HPP
