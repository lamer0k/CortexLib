//
// Created by Lamerok on 21.08.2019.
//

#pragma once

#include <cstddef>           //for size_t
#include <limits>       // for std::mnumeric_limits<>
#include "fieldvaluebase.hpp" //for BitsFieldBase

using namespace std;

//Класс для работы с битовыми полями. Добавился тип Base, который необходим для того, чтобы проверить, что
//В регистре устанавливаются те битовые поля, которые допустимы для данного регистра
//template<typename Reg, size_t offset, size_t size, typename AccessMode, typename Base, typename Reg::Type value>
template<typename Field, typename Base, typename Field::Register::Type value,
				class = typename std::enable_if_t<std::is_unsigned<typename Field::Register::Type>::value>>
struct FieldValue : public FieldValueBase<Field, Base, value>
{
		using Type = typename Field::Register::Type;
		constexpr static auto Mask = Field::Mask;
		constexpr static auto Value = value;
		constexpr static auto Offset = Field::Offset;
		using BaseType = Base;
		using Access = typename Field::Access;
		using FieldType = Field;
};
