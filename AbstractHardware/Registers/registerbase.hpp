//
// Created by Lamerok on 21.08.2019.
//

#pragma once

#include "registertype.hpp"   //for RegisterType
#include "accessmode.hpp"    //for WriteMode, ReadMode
#include "susudefs.hpp"      //for __forceinline

//Базовый класс для работы с регистром
template<std::uintptr_t address, size_t size, typename AccessMode>
struct RegisterBase
{
  static constexpr auto Address = address ;
  using Type = typename RegisterType<size>::Type ;


  //Метод Write будет работать только для регистров, в которые можно записать значение
  __forceinline template<typename T = AccessMode,
                         typename = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || std::is_base_of<ReadWriteMode, T>::value >>
  inline static void Write(Type value)
  {
    *reinterpret_cast<volatile Type *>(address) = value ;
  }

    //Метод Write будет работать только для регистров, в которые можно записать значение
    __forceinline template<Type value, typename T = AccessMode,
        class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || std::is_base_of<ReadWriteMode, T>::value >>
    inline static void Write()
    {
      *reinterpret_cast<volatile Type *>(address) = value ;
    }

  //Метод Write будет работать только для регистров, в которые можно записать значение
  __forceinline template<typename T = AccessMode,
      class = typename std::enable_if_t<std::is_base_of<WriteMode, T>::value || std::is_base_of<ReadWriteMode, T>::value >>
  inline static void Set(Type value)
  {
    Type oldRegValue = *reinterpret_cast<volatile Type *>(address) ; //Сохраняем текущее значение регистра
    *reinterpret_cast<volatile Type *>(address) = oldRegValue | value ;
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

