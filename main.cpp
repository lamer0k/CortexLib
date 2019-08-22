//#include <cstdint>            //for int types such as uint32_t
#include "gpioabitsfield.hpp" //for Gpioa Registers enums
#include "gpioaregisters.hpp" //for Gpioa

using namespace std ;

/*//********Сгенерировано с помощью скрипта на Python из файла STM32F411.svd*************************
//Базовые классы для битовых полей
struct OspeedrValuesBase {} ;
struct ModerValuesBase {} ;
struct OtyperValuesBase {} ;
struct PupdrValuesBase {} ;
struct DefaultValuesBase {} ;

//****** Сгенерировано с помощью скрипта на Python из файла STM32F411.svd*************************
// Но можно подправить руками, чтобы значения были читабельны и юзерфрендли
template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct ModerValues
{
  using Input     = BitsField<Reg, offset, size, AccessMode, ModerValuesBase, 0UL>;
  using Output    = BitsField<Reg, offset, size, AccessMode, ModerValuesBase,  1UL>;
  using Alternate = BitsField<Reg, offset, size, AccessMode, ModerValuesBase, 2UL>;
  using Analog    = BitsField<Reg, offset, size, AccessMode, ModerValuesBase, 3UL>;
  using Test      = RegisterField<Reg, offset, size, AccessMode>;
} ;

template <typename Reg, size_t offset, size_t size, typename AccessMode, typename BaseType>
struct OspeederValues
{
  using Value0     = BitsField<Reg, offset, size, AccessMode, ModerValuesBase, 0UL>;
  using Value1    = BitsField<Reg, offset, size, AccessMode, ModerValuesBase,  1UL>;
  using Value2 = BitsField<Reg, offset, size, AccessMode, ModerValuesBase, 2UL>;
  using Value3    = BitsField<Reg, offset, size, AccessMode, ModerValuesBase, 3UL>;
  
} ;


//****** Сгенерировано с помощью скрипта на Python из файла STM32F411.svd*************************
struct Gpioa
{
  struct Moder : RegisterBase<0x40020000, 32, ReadWriteMode>
  {
    struct Moder15 : ModerValues<Moder, 30, 2, ReadWriteMode, ModerValuesBase> {};
    struct Moder14 : ModerValues<Moder, 28, 2, ReadWriteMode, ModerValuesBase> {};
  };
  template<typename... T>
  using ModerPack =  Register<0x40020000, 32, ReadWriteMode, ModerValuesBase, T...> ;
};*/

int main()
{
  Gpioa::Moder::Moder15::Value0::Set() ;
  auto result = Gpioa::Moder::Moder15::Value0::IsSet() ;
  Gpioa::Moder::Write(2U) ;
  auto test = Gpioa::Moder::Get();
  
  Gpioa::ModerPack<
          Gpioa::Moder::Moder15::Value0,
          Gpioa::Moder::Moder14::Value1
  >::Set() ;
  
  result = Gpioa::ModerPack<
          Gpioa::Moder::Moder15::Value0,
          Gpioa::Moder::Moder14::Value1
  >::IsSet() ;
  
  Gpioa::Moder::Moder15::Set(2) ;
  test = Gpioa::Moder::Moder15::Get();
  
  //Gpioa::Moder::Moder15::Test::Set(10) ;
 // result = Gpioa::ModerPack<
 //         Gpioa::Moder::Moder15::Input,
 //         Gpioa::Moder::Moder14::Analog
 // >::IsSet() ;
  
  return 0 ;
}

