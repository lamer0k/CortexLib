//
// Created by SKolody on 22.08.2019.
//

#pragma once

#include <cassert>      //for assert
#include <limits>       // for std::mnumeric_limits<>
//#include <atomicutils.hpp>
#include "susudefs.hpp" //for __forceinline (#define __forceinline  _Pragma("inline=forced"))
//#include "criticalsectionconfig.hpp" // for CriticalSection

//Базовый класс для работы с битовыми полями регистров
template<typename Reg, size_t offset, size_t size, typename AccessMode, class = typename std::enable_if_t<std::is_unsigned<typename Reg::Type>::value>>
struct RegisterField
{
		using RegType = typename Reg::Type;
		using Register = Reg;

		static constexpr RegType Offset = offset;
		static constexpr RegType Size = size;
		static constexpr RegType Mask = (size < sizeof(RegType) * 8U) ? (static_cast<RegType>(
						(static_cast<RegType>(1U) << size) - static_cast<RegType>(1U))) : std::numeric_limits<RegType>::max();
		using Access = AccessMode;

		//Метод устанавливает значение битового поля, только в случае, если оно достпуно для записи
		__forceinline template<typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<ReadWriteMode, T>::value>>
		static void Set(RegType value)
		{
				assert((size < sizeof(RegType) * 8U) ? (value <= ((static_cast<RegType>(1U) << size) - static_cast<RegType>(1U))) :
				       (value <= std::numeric_limits<RegType>::max()));

				RegType newRegValue = *reinterpret_cast<volatile RegType*>(Reg::Address); //Сохраняем текущее значение регистра

				newRegValue &= ~(Mask << offset); //Вначале нужно очистить старое значение битового поля
				newRegValue |= (value << offset); // Затем установить новое

				*reinterpret_cast<volatile RegType*>(Reg::Address) = newRegValue; //И записать новое значение в регистр
		}

		//Метод устанавливает значение битового поля, только в случае, если оно достпуно для записи
		__forceinline template<RegType value, typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<ReadWriteMode, T>::value>>
		static void Set()
		{
				static_assert((size < sizeof(RegType) * 8U) ? (value <= ((static_cast<RegType>(1U) << size) - static_cast<RegType>(1U))) :
							 (value <= std::numeric_limits<RegType>::max()), "Value type size is more then the field size");
				RegType newRegValue = *reinterpret_cast<volatile RegType*>(Reg::Address); //Сохраняем текущее значение регистра

				newRegValue &= ~(Mask << offset); //Вначале нужно очистить старое значение битового поля
				newRegValue |= (value << offset); // Затем установить новое

				*reinterpret_cast<volatile RegType*>(Reg::Address) = newRegValue; //И записать новое значение в регистр
		}

		//Метод устанавливает значение битового поля, только в случае, если оно достпуно для записи
		__forceinline template<typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value>>
		static void Write(RegType value)
		{
				assert((size < sizeof(RegType) * 8U) ? (value <= ((static_cast<RegType>(1U) << size) - static_cast<RegType>(1U))) :
							 (value <= std::numeric_limits<RegType>::max()));
				*reinterpret_cast<volatile RegType*>(Reg::Address) = (value << offset);
		}

		//Метод устанавливает значение битового поля, только в случае, если оно достпуно для записи
		__forceinline template<RegType value, typename T = AccessMode, class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value>>
		static void Write()
		{
				static_assert((size < sizeof(RegType) * 8U) ? (value <=((static_cast<RegType>(1U) << size) - static_cast<RegType>(1U))) :
											(value <= std::numeric_limits<RegType>::max()), "Value type size is more then the field size");
				*reinterpret_cast<volatile RegType*>(Reg::Address) = (value << offset);
		}

		//Метод устанавливает проверяет установлено ли значение битового поля
		__forceinline template<typename T = AccessMode, class = typename std::enable_if_t<
						std::is_base_of<ReadMode, T>::value || std::is_base_of<ReadWriteMode, T>::value>>
		inline static RegType Get()
		{
				return ((*reinterpret_cast<volatile RegType*>(Reg::Address)) & (Mask << offset)) >> offset;
		}
};

