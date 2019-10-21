//
// Created by Lamerok on 21.08.2019.
//

#ifndef REGISTERS_REGISTERBASE_HPP
#define REGISTERS_REGISTERBASE_HPP

#include "registertype.hpp"   //for RegisterType
#include "accessmode.hpp"    //for WriteMode, ReadMode
#include "susudefs.hpp"      //for __forceinline

//Базовый класс для работы с регистром
template<uint32_t address, size_t size, typename AccessMode>
struct RegisterBase
{
  static constexpr auto Address = address ;
  using Type = typename RegisterType<size>::Type ;


  //Метод Write будет работать только для регистров, в которые можно записать значение
  __forceinline template<typename T = AccessMode,
    class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || std::is_base_of<ReadWriteMode, T>::value >>
  inline static void Write(Type value)
  {
    *reinterpret_cast<volatile Type *>(address) = value ;
  }


  //Метод Write будет работать только для регистров, в которые можно записать значение
  __forceinline template<typename T = AccessMode,
    class = typename std::enable_if_t<std::is_base_of<ReadWriteMode, T>::value>>
  inline static void Toggle(Type value)
  {
    *reinterpret_cast<volatile Type *>(address) ^= value ;
  }

  //Метод Get возвращает целое значение регистра, будет работать только для регистров, которые можно считать
  __forceinline template<typename T = AccessMode,
          class = typename std::enable_if_t<std::is_base_of<ReadMode, T>::value ||
                                            std::is_base_of<ReadWriteMode, T>::value>>
  inline static Type Get()
  {
    return *reinterpret_cast<volatile Type *>(address) ;
  }
} ;

#endif //REGISTERS_REGISTERBASE_HPP
