//
// Created by Lamerok on 21.08.2019.
//
#ifndef REGISTERS_REGISTER_HPP
#define REGISTERS_REGISTER_HPP

#include <initializer_list>   //for initializer_list
#include "fieldvalue.hpp"      //for BitsFileds
#include "registertype.hpp"   //for RegisterType
#include "accessmode.hpp"     //for WriteMode, ReadMode
#include "susudefs.hpp"       //for __forceinline


//Класс для работы с регистром, можно передавать список Битовых полей для установки и проверки
template<uint32_t address, size_t size, typename AccessMode, typename FieldValueBaseType,  typename ...Args>
class Register
{
public:
  using Type = typename RegisterType<size>::Type;
  //Метод Set устанавливает битовые поля, только если регистр может использоваться для записи
  __forceinline template<typename T = AccessMode,
          class = typename std::enable_if_t<std::is_base_of<ReadWriteMode, T>::value>>
  static void Set()
  {
    Type newRegValue = *reinterpret_cast<volatile Type *>(address) ; //Сохраняем текущее значение регистра
    
    newRegValue &= ~GetMask() ; //Сбрасываем битовые поля, которые нужно будет установить
    newRegValue |= GetValue() ; //Устанавливаем новые значения битовых полей
    *reinterpret_cast<volatile Type *>(address) = newRegValue ; //Записываем в регистра новое значение
  }

    //Метод устанавливает значение битового поля, только в случае, если оно достпуно для записи
    __forceinline template<typename T = AccessMode,
      class = typename std::enable_if_t<std::is_base_of<ReadWriteMode, T>::value>>
    static void SetAtomic()
    {
      AtomicUtils<Type>::Set(
        address,
        GetMask(),
        GetValue,
        0U
      ) ;
    }

  //Метод Write устанавливает битовые поля, только если регистр может использоваться для записи
  __forceinline template<typename T = AccessMode,
          class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value>>
  static void Write()
  {
    *reinterpret_cast<volatile Type *>(address) = GetValue() ; //Записываем в регистра новое значение
  }
  
  
  //Метод IsSet проверяет что все битовые поля из переданного набора установлены
  __forceinline template<typename T = AccessMode,
          class = typename std::enable_if_t<std::is_base_of<ReadMode, T>::value ||
                                            std::is_base_of<ReadWriteMode, T>::value>>
  static bool IsSet()
  {
    Type newRegValue = *reinterpret_cast<volatile Type *>(address) ;
    return ((newRegValue & GetMask()) == GetValue()) ;
  }

private:
  //Вспомогательный метод, возвращает маску для конктретного битового поля на этапе компиляции.
  //Метод определен только в случае, если тип битового поля и базовый тип битового поля для регистра совпадают.
  //Т.е. нельзя устанвоить набор битов не соотвествующих набору для для данного регистра.
  __forceinline template<typename T,
          class = typename std::enable_if_t<std::is_same<FieldValueBaseType, typename T::BaseType>::value>>
  static constexpr auto GetIndividualMask()
  {
    Type result = T::Mask << T::Offset ;
    return result ;
  }
  
  //Вспомогательный метод, расчитывает общую маску для всего набора битовых полей на этапе компиляции.
  static constexpr auto GetMask()
  {
    const auto values = {GetIndividualMask<Args>()...} ;  //распаковываем набор битовых полей через список инициализации
    Type result = 0UL;
    for (auto const v: values)
    {
      result |= v ;  //для каждого битового поля устанавливаем битовую маску
    }
    return result ;
  }
  
  //Вспомогательный метод, возвращает значение для конктретного битового поля на этапе компиляции.
  //Метод определен только в случае, если тип битового поля и базовый тип битового поля для регистра совпадают.
  //Т.е. нельзя устанвоить набор битов не соотвествующих набору для для данного регистра.
  __forceinline template<typename T,
          class = typename std::enable_if_t<std::is_same<FieldValueBaseType, typename T::BaseType>::value>>
  static constexpr auto GetIndividualValue()
  {
    Type result = T::Value << T::Offset ;
    return result ;
  }
  
  //Вспомогательный метод, расчитывает значение которое нужно установить в регистре для всего набора битовых полей
  static constexpr auto GetValue()
  {
    const auto values = {GetIndividualValue<Args>()...};
    Type result = 0UL;
    for (const auto v: values)
    {
      result |= v ;
    }
    return result ;
  }
};

#endif //REGISTERS_REGISTER_HPP
