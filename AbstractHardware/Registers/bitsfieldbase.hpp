//
// Created by Lamerok on 21.08.2019.
//

#ifndef REGISTERS_BITSFIELDBASE_HPP
#define REGISTERS_BITSFIELDBASE_HPP

#include <cstddef>           //for size_t
#include <type_traits>       //for std::is_base_of, std::is_same
#include "accessmode.hpp"    //for WriteMode, ReadMode
#include "susudefs.hpp"      //for __forceinline
#include "registerfield.hpp" //for RegisterField

//Базовый класс для работы с битовыми полями регистров
template<typename Reg, size_t offset, size_t size, typename AccessMode, typename Reg::Type value>
struct BitsFieldBase
{
  using RegType = typename Reg::Type ;
  //Метод устанавливает значение битового поля, только в случае, если оно достпуно для записи
  template<typename T = AccessMode,
          class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value>>
  static void Set()
  {
    RegType newRegValue = *reinterpret_cast<RegType *>(Reg::Addr) ; //Сохраняем текущее значение регистра
    
    newRegValue &= ~ (((1 << size) - 1) << offset); //Вначале нужно очистить старое значение битового поля
    newRegValue |= (value << offset) ; // Затем установить новое
    
    *reinterpret_cast<RegType *>(Reg::Addr) = newRegValue ; //И записать новое значение в регистр
  }
  
  //Метод устанавливает проверяет установлено ли значение битового поля
  __forceinline template<typename T = AccessMode,
          class = typename std::enable_if_t<std::is_base_of<ReadMode, T>::value>>
  inline static bool IsSet()
  {
    return ((*reinterpret_cast<RegType *>(Reg::Addr)) & static_cast<RegType>(((1 << size) - 1) << offset))
                                                                                                == (value << offset) ;
  }
};
#endif //REGISTERS_BITSFIELDBASE_HPP
