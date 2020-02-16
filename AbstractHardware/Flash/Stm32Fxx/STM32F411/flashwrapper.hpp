#if !defined(FLASHWRAPPER_HPP)
#define FLASHWRAPPER_HPP

#include "susudefs.hpp"   //
#include "sector.hpp"     // For Sector class
#include <array>          // For std::array
#include "flashregisters.hpp" // for Flash

//static_assert(STM32F411xx == 1,
//              "This implementation only for STM32F411RG micro") ;

constexpr std::uint32_t SectorsCount = 8U ;

constexpr std::array<Sector, SectorsCount> Sectors =
{ {
  Sector{ 0x08000000UL, 0x08003FFFUL,  0UL }, // 16 kB
  Sector{ 0x08004000UL, 0x08007FFFUL,  1UL }, // 16 kB
  Sector{ 0x08008000UL, 0x0800BFFFUL,  2UL }, // 16 kB
  Sector{ 0x0800C000UL, 0x0800FFFFUL,  3UL }, // 16 kB
  Sector{ 0x08010000UL, 0x0801FFFFUL,  4UL }, // 64 kB
  Sector{ 0x08020000UL, 0x0803FFFFUL,  5UL }, // 128 kB
  Sector{ 0x08040000UL, 0x0805FFFFUL,  6UL }, // 128 kB
  Sector{ 0x08060000UL, 0x0807FFFFUL,  7UL }, // 128 kB 
  }
} ;


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

    __forceinline static void Erase(const std::size_t addr)
    {
      //search needed sector in the sectors list and erase it if found.
      const std::int32_t sector = GetSectorIndex(addr) ;
      assert(sector >= 0) ;
      EraseSector(static_cast<std::uint32_t>(sector)) ;      
    }
    
    static void Write(const char * const pSrc, char * const pDest, //lint  !e971
            const std::size_t length)
    {
      if( (length < MaxMessageLength) && (pSrc != nullptr) && (pDest != nullptr))
      {
        
        while(!IsReady())
        {
        }

        FLASH::CR::PG::StartProgram::Set() ;

        const char * const pSource = pSrc;
        char * const pDestination = pDest;

        for(std::size_t i = 0U; i < length; ++i)
        {
          
          pDestination[i] = pSource[i] ;
          
          while(!IsReady())
          {
          }
        }
        FLASH::CR::PG::Clear::Set() ;
        Lock();
      }
    }

  template<typename T>
  static void Write(T  value, const T * const pDest)
  {

    assert(pDest != nullptr) ;
    static_assert((sizeof(T) == 1) || ((sizeof(T) == 2)) || (sizeof(T) == 4) || (sizeof(T) == 8)) ;

    if constexpr (sizeof(T) == 1 )
    {
      FLASH::CR::PSIZE::Size8bits::Set() ;
    } else if constexpr (sizeof(T) == 2)
    {
      FLASH::CR::PSIZE::Size16bits::Set() ;
    } else if constexpr (sizeof(T) == 4)
    {
      FLASH::CR::PSIZE::Size32bits::Set() ;
    } else if constexpr (sizeof(T) == 8)
    {
      FLASH::CR::PSIZE::Size64bits::Set() ;
    } else
    {
      FLASH::CR::PSIZE::Size8bits::Set() ;  
    }    

    while(!IsReady())
    {
    }

    FLASH::CR::PG::StartProgram::Set() ;
     
    *const_cast<T *>(pDest) = value ;
    while(!IsReady())
    {
    }

    FLASH::CR::PG::Clear::Set() ;
    Lock();
  }

  private:

    __forceinline static bool IsReady()
    {
      return (FLASH::SR::BSY::NotBusy::IsSet()) ;
    }

    static void EraseSector(const std::size_t index)
    {
      
      while (!IsReady())
      {
      }
      
      FLASH::CR::SNB::Set(index) ;
      FLASH::CR::SER::Activate::Set() ;
      
      FLASH::CR::STRT::Start::Set() ;

      while (!IsReady())
      {
      }

      FLASH::CR::SER::Clear::Set() ;
      Lock() ;
    }

    static std::int32_t GetSectorIndex(const std::size_t addr)
    {
      std::int32_t result = -1 ;
      for(auto& it: Sectors)
      {
        if((it.Start <= addr) && ((it.End >= addr)))
        {
          result = static_cast<std::int32_t>(it.Index) ;
        }
      }
      return result ;
    }

    static constexpr uint32_t FlashCode1  = uint32_t(0x45670123U) ;
    static constexpr uint32_t FlashCode2  = uint32_t(0xCDEF89ABU) ;
    static constexpr std::size_t MaxMessageLength = 255U ;
};

//#endif //NDEBUG
#endif //FLASHWRAPPER_HPP
