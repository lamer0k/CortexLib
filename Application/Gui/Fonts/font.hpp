//
// Created by Sergey on 04.11.2019.
//

#ifndef REGISTERS_FONT_HPP
#define REGISTERS_FONT_HPP

#include <cstdint>

struct Font
{
  const std::uint8_t *table;
  std::uint16_t Width;
  std::uint16_t Height;
} ;

#endif //REGISTERS_FONT_HPP
