//
// Created by Lamerok on 21.08.2019.
//

#ifndef REGISTERS_FIELDVALUE_HPP
#define REGISTERS_FIELDVALUE_HPP

#include <cstddef>           //for size_t
#include "fieldvaluebase.hpp" //for BitsFieldBase

using namespace std ;

//Класс для работы с битовыми полями. Добавился тип Base, который необходим для того, чтобы проверить, что
//В регистре устанавливаются те битовые поля, которые допустимы для данного регистра
template<typename Reg, size_t offset, size_t size, typename AccessMode, typename Base, typename Reg::Type value>
struct FieldValue: public FieldValueBase<Reg, offset, size, AccessMode, value>
{
  using Type = typename Reg::Type ;
  constexpr static auto Mask = static_cast<Type>(1U << size) - 1U ;
  constexpr static auto Value = value ;
  constexpr static auto Offset = offset ;
  using BaseType = Base ;
  using AccessModeType = AccessMode ;
} ;

#endif //REGISTERS_FIELDVALUE_HPP
