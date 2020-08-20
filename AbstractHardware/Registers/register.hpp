//
// Created by Lamerok on 21.08.2019.
//
#pragma once

#include "fieldvalue.hpp"      //for BitsFileds
#include "registertype.hpp"   //for RegisterType
#include "accessmode.hpp"     //for WriteMode, ReadMode
#include "susudefs.hpp"       //for __forceinline

//Класс для работы с регистром, можно передавать список Битовых полей для установки и проверки
template<std::uintptr_t address, size_t size, typename AccessMode, typename FieldValueBaseType, typename ...Args>
class Register
{
 public:
    using Type = typename RegisterType<size>::Type;
    //Метод Set устанавливает битовые поля, только если регистр может использоваться для записи
    __forceinline template<typename T = AccessMode,
        class = typename std::enable_if_t<std::is_base_of<ReadWriteMode, T>::value>>
    static void Set()
    {
        Type newRegValue = *reinterpret_cast<volatile Type*>(address); //Сохраняем текущее значение регистра
        static constexpr auto mask = GetMask();
        static constexpr auto value = GetValue();

        newRegValue &= ~mask; //Сбрасываем битовые поля, которые нужно будет установить
        newRegValue |= value; //Устанавливаем новые значения битовых полей
        *reinterpret_cast<volatile Type*>(address) = newRegValue; //Записываем в регистра новое значение
    }

//    //Метод устанавливает значение битового поля, только в случае, если оно достпуно для записи
//    __forceinline template<typename T = AccessMode,
//            class = typename std::enable_if_t<std::is_base_of<ReadWriteMode, T>::value>>
//    static void SetAtomic()
//    {
//      AtomicUtils<Type>::Set(
//              address,
//              GetMask(),
//              GetValue,
//              0U
//      ) ;
//    }

    //Метод Write устанавливает битовые поля, только если регистр может использоваться для записи
    __forceinline template<typename T = AccessMode,
        class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value||
                                          std::is_base_of<ReadWriteMode, T>::value>>
    static void Write()
    {
        static constexpr auto value = GetValue();

        *reinterpret_cast<volatile Type*>(address) = value; //Записываем в регистра новое значение
    }


    //Метод IsSet проверяет что все битовые поля из переданного набора установлены
    __forceinline template<typename T = AccessMode,
        class = typename std::enable_if_t<std::is_base_of<ReadMode, T>::value ||
                                          std::is_base_of<ReadWriteMode, T>::value>>
    static bool IsSet()
    {
        static constexpr auto mask = GetMask();
        static constexpr auto value = GetValue();
        Type newRegValue = *reinterpret_cast<volatile Type*>(address);

        return ((newRegValue & mask) == value);
    }

 private:
    //Вспомогательный метод, возвращает маску для конктретного битового поля на этапе компиляции.
    //Метод определен только в случае, если тип битового поля и базовый тип битового поля для регистра совпадают.
    //Т.е. нельзя устанвоить набор битов не соотвествующих набору для для данного регистра.
    __forceinline template<typename T,
        class = typename std::enable_if_t<std::is_same<FieldValueBaseType, typename T::BaseType>::value>>
    static constexpr auto GetIndividualMask()
    {
        constexpr Type result = T::Mask << T::Offset;
        return result;
    }

    //Вспомогательный метод, расчитывает общую маску для всего набора битовых полей на этапе компиляции.
    static constexpr auto GetMask()
    {
        static_assert(!IsIdentType<Args...>(), "There is the same field value type");
        return (GetIndividualMask<Args>() | ...);//result ;
    }

    //Вспомогательный метод, возвращает значение для конктретного битового поля на этапе компиляции.
    //Метод определен только в случае, если тип битового поля и базовый тип битового поля для регистра совпадают.
    //Т.е. нельзя устанвоить набор битов не соотвествующих набору для для данного регистра.
    __forceinline template<typename T,
        class = typename std::enable_if_t<std::is_same<FieldValueBaseType, typename T::BaseType>::value>>
    static constexpr auto GetIndividualValue()
    {
        constexpr Type result = T::Value << T::Offset;
        return result;
    }

    //Вспомогательный метод, расчитывает значение которое нужно установить в регистре для всего набора битовых полей
    static constexpr auto GetValue()
    {
        return (GetIndividualValue<Args>() | ...);
    }

    template<typename ...T>
    static constexpr auto IsIdentType()
    {
        return IsIdent<Args...>();
    }

    template<typename T, typename ...Ts>
    static constexpr bool IsIdent()
    {
        if constexpr (sizeof...(Ts) != 0U)
        {
            if (Attributes<typename Ts::FieldType...>::template HasAttribute<T::FieldType>())
            {
                return true;
            }
            else
            {
                return IsIdent<Ts...>();
            }
        }
        else
        {
            return false;
        }
        assert(false);  // Dummy IAR
        return false;
    }

};

