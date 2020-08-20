//
// Created by Lamerok on 21.08.2019.
//

#pragma once
#include <cstddef>           //for size_t
#include <type_traits>       //for std::is_base_of, std::is_same
#include "accessmode.hpp"    //for WriteMode, ReadMode
#include "susudefs.hpp"      //for __forceinline
#include "registerfield.hpp" //for RegisterField


//Базовый класс для работы с битовыми полями регистров
template<typename Field, typename Base, typename Field::Register::Type value>
struct FieldValueBase
{
  using RegType = typename Field::Register::Type ;
  //Метод устанавливает значение битового поля, только в случае, если оно достпуно для записи
  __forceinline template<typename T = typename Field::Access,
          class = typename std::enable_if_t<std::is_base_of<ReadWriteMode, T>::value>>
  static void Set()
  {

    RegType newRegValue = *reinterpret_cast<volatile RegType *>(Field::Register::Address) ; //Сохраняем текущее значение регистра
    
    newRegValue &=~ (Field::Mask << Field::Offset); //Вначале нужно очистить старое значение битового поля
    newRegValue |= (value << Field::Offset) ; // Затем установить новое
    
    *reinterpret_cast<volatile RegType *>(Field::Register::Address) = newRegValue ; //И записать новое значение в регистр
  }

//  //Метод устанавливает значение битового поля, только в случае, если оно достпуно для записи
//  __forceinline template<typename T = typename Field::Access,
//    class = typename std::enable_if_t<std::is_base_of<ReadWriteMode, T>::value>>
//  static void SetAtomic()
//  {
//    AtomicUtils<RegType>::Set(
//      Field::Register::Address,
//      Field::Mask,
//      value,
//      Field::Offset
//      ) ;
//  }

  //Метод устанавливает значение битового поля, только в случае, если оно достпуно для записи
  __forceinline template<typename T = typename Field::Access,
          class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value ||
                                            std::is_base_of<ReadWriteMode, T>::value>>
  static void Write()
  {
    *reinterpret_cast<volatile RegType *>(Field::Register::Address) = (value << Field::Offset) ;
  }
  
  
  //Метод проверяет установлено ли значение битового поля
  __forceinline template<typename T = typename Field::Access,
          class = typename std::enable_if_t<std::is_base_of<ReadMode, T>::value ||
                                            std::is_base_of<ReadWriteMode, T>::value>>
  inline static bool IsSet()
  {
    return ((*reinterpret_cast<volatile RegType *>(Field::Register::Address)) &
              static_cast<RegType>(Field::Mask << Field::Offset)) == (value << Field::Offset) ;
  }
};

