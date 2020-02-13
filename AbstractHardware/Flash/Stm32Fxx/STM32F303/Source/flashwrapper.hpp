#if !defined(FLASHWRAPPER_HPP)
#define FLASHWRAPPER_HPP

#include "susudefs.hpp"   //
#include "sector.hpp"     // For Sector class
#include <array>          // For std::array
#include "flashregisters.hpp" // for Flash

static_assert(STM32F411xx == 1,
              "This implementation only for STM32F411RG micro") ;

constexpr std::size_t SectorsCount = 255U ;

constexpr std::size_t SectorsStartAddr = 0x0800'0000U;
constexpr std::size_t SectorsSize = 0x800U;


class FlashWrapper
{
  public:
    __forceinline static void Unclock()
    {
      //Write special keys to unlock the Flash
      FLASH::KEYR::Write(FlashCode1) ;
      FLASH::KEYR::Write(FlashCode2) ;
    }
    
    __forceinline static void Lock()
    {
      FLASH::CR::LOCK::Enable::Set() ;
    }

    static void Erase(const std::size_t addr)
    {
      assrrt((addr >= SectorsStartAddr) && (addr < (SectorsStartAddr + SectorsCount * SectorsSize))) ;
      EraseSector(addr) ;
    }
    
    
    template<typename T>
    static void Write(const T * const pSrc, T * const pDest)
    {
      //Тут надо бы проверить, что адрес не выходит за границу страницы, но предполагаем, что все одной странице
      if( pSrc != nullptr) && (pDest != nullptr))
      {
        
        while(!IsReady())
        {
        }

        FLASH::CR::PG::StartProgram::Set() ;

        const std::uint16_t * const pSource = static_cast<std::uint16_t *>(pSrc); //писать надо по пол слова
        std::uint16_t * const pDestination = static_cast<std::uint16_t *>(pDest); //писать надо по пол слова
        
        //если размер не четный, то писать все равно надо пол слова.
        std::size_t Size = ((sizeof(T) % 2) == 0) ? sizeof(T) / 2 : (sizeof(T) / 2 + 1) ;
        
        for(std::size_t i = 0U ; i < Size ; ++i ;)
        {
          pDestination[i] = pSource[i] ;
          while(!IsReady())
          {
          }
          while (FLASH::SR::EOP::NotComplete::IsSet())
          {
          };
          FLASH::SR::EOP::NotComplete::Set() ;
        }
        
        FLASH::CR::PG::Clear::Set() ;
        Lock();
      }
    }

  private:

    __forceinline static bool IsReady()
    {
      return (FLASH::SR::BSY::NotBusy::IsSet()) ;
    }

    static void EraseSector(const std::size_t addr)
    {
      
      while (!IsReady())
      {
      }
      
      FLASH::CR::PER::PageErase::Set() ;
      FLASH::AR::FAR::Write(addr) ;
      
      FLASH::CR::STRT::Start::Set() ;
      FLASH::CR::STRT::Start::Set() ; //The software should start checking if the BSY bit equals ‘0’ at least one CPU cycle after setting the STRT bit.
      
      while (!IsReady())
      {
      }

      while (FLASH::SR::EOP::NotComplete::IsSet())
      {
      };
      
      FLASH::SR::EOP::NotComplete::Set() ;
      Lock() ;
    }

    static constexpr std::uint32_t FlashCode1  = 0x45670123U ;
    static constexpr std::uint32_t FlashCode2  = 0xCDEF89ABU ;
    
};

#endif //NDEBUG
#endif //FLASHWRAPPER_HPP
