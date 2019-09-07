#include <utility>           //for initializer_list
#include <cstdint>           //for int types such as uint32_t
#include "register.hpp"      //for Register class
#include "registerbase.hpp"  //for RegisterBase class

using namespace std ;

//********Сгенерировано с помощью скрипта на Python из файла STM32F411.svd*************************
//Базовые классы для битовых полей
struct OspeedrValuesBase {} ;
struct ModerValuesBase {} ;
struct OtyperValuesBase {} ;
struct PupdrValuesBase {} ;
struct DefaultValuesBase {} ;

//****** Сгенерировано с помощью скрипта на Python из файла STM32F411.svd*************************
// Но можно подправить руками, чтобы значения были читабельны и юзерфрендли
template <typename Reg, typename AccessMode, typename BaseType, size_t offset, size_t size>
struct ModerValues
{
  using Input     = BitsField<Reg, AccessMode, ModerValuesBase, offset, size, 0UL>;
  using Output    = BitsField<Reg, AccessMode, ModerValuesBase, offset, size, 1UL>;
  using Alternate = BitsField<Reg, AccessMode, ModerValuesBase, offset, size, 2UL>;
  using Analog    = BitsField<Reg, AccessMode, ModerValuesBase, offset, size, 3UL>;
} ;

template <typename Reg, typename AccessMode, typename BaseType, size_t offset, size_t size>
struct OspeederValues
{
  using Value0    = BitsField<Reg, AccessMode, OspeedrValuesBase, offset, size, 0UL>;
  using Value1    = BitsField<Reg, AccessMode, OspeedrValuesBase, offset, size, 1UL>;
  using Value2    = BitsField<Reg, AccessMode, OspeedrValuesBase, offset, size, 2UL>;
  using Value3    = BitsField<Reg, AccessMode, OspeedrValuesBase, offset, size, 3UL>;
} ;


//****** Сгенерировано с помощью скрипта на Python из файла STM32F411.svd*************************
struct Gpioa
{
  struct Moder : RegisterBase<0x40020000, 32, ReadWriteMode>
  {
    struct Moder15 : ModerValues<Moder, ReadWriteMode, ModerValuesBase, 30, 2> {};
    struct Moder14 : ModerValues<Moder, ReadWriteMode, ModerValuesBase, 28, 2> {};
  };
  template<typename... T>
  using ModerPack =  Register<0x40020000, 32, ReadWriteMode, ModerValuesBase, T...> ;
};

int main()
{
  Gpioa::Moder::Moder15::Input::Set() ;
  auto result = Gpioa::Moder::Moder15::Input::IsSet() ;
  Gpioa::Moder::Write(10U) ;
  auto test = Gpioa::Moder::Get();
  
  Gpioa::ModerPack<
          Gpioa::Moder::Moder15::Input,
          Gpioa::Moder::Moder14::Analog
  >::Set() ;
  
  result = Gpioa::ModerPack<
          Gpioa::Moder::Moder15::Input,
          Gpioa::Moder::Moder14::Analog
  >::IsSet() ;
  
  return 0 ;
}

