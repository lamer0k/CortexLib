//
// Created by Lamerok on 21.08.2019.
//

#ifndef REGISTERS_BITSFIELD_HPP
#define REGISTERS_BITSFIELD_HPP

#include <cstddef>           //for size_t
#include "bitsfieldbase.hpp" //for BitsFieldBase

using namespace std ;

//Класс для работы с битовыми полями. Добавился тип Base, который необходим для того, чтобы проверить, что
//В регистре устанавливаются те битовые поля, которые допустимы для данного регистра
template<typename Reg, typename AccessMode, typename Base, size_t offset, size_t size, typename Reg::Type value>
struct BitsField: public BitsFieldBase<Reg, offset, size, AccessMode, value>
{
  constexpr static auto Mask = ((1 << size) - 1) ;
  constexpr static auto Value = value ;
  constexpr static auto Offset = offset ;
  using BaseType = Base ;
  using AccessModeType = AccessMode ;
} ;

#endif //REGISTERS_BITSFIELD_HPP
