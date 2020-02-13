#if !defined(FLASHWRAPPER_HPP)
#define FLASHWRAPPER_HPP

#include "susudefs.hpp"   //
#include "sector.hpp"     // For Sector class
#include <array>          // For std::array
#include "flashregisters.hpp" // for Flash

static_assert(STM32F411xx == 1,
              "This implementation only for STM32F411RG micro") ;

constexpr tU32 SectorsCount = tU32(7U) ;

constexpr std::array<Sector, SectorsCount> Sectors =
{
  Sector{ 0x08000000UL, 0x08003FFFUL,  0UL }, // 16 kB
  Sector{ 0x08004000UL, 0x08007FFFUL,  1UL }, // 16 kB
  Sector{ 0x08008000UL, 0x0800BFFFUL,  2UL }, // 16 kB
  Sector{ 0x0800C000UL, 0x0800FFFFUL,  3UL }, // 16 kB
  Sector{ 0x08010000UL, 0x0801FFFFUL,  4UL }, // 64 kB
  Sector{ 0x08020000UL, 0x0803FFFFUL,  5UL }, // 128 kB
  Sector{ 0x08040000UL, 0x0805FFFFUL,  6UL }, // 128 kB
  Sector{ 0x08060000UL, 0x0807FFFFUL,  7UL }, // 128 kB
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

    static void Erase(const tU32 addr)
    {
      //search needed sector in the sectors list and erase it if found.
      const tS32 sector = GetSectorIndex(addr) ;
      if (sector >= tS32(0))
      {
        EraseSector(static_cast<tU32>(sector)) ;
      }
    }

    
    static void Write(const tChar * const pSrc, tChar * const pDest, //lint  !e971
            const tU32 length)
    {
      if( (length < MaxMessageLength) && (pSrc != nullptr) && (pDest != nullptr))
      {
        
        while(!IsReady())
        {
        }

        FLASH::CR::PG::StartProgram::Set() ;

        const tChar * const pSource = pSrc;
        tChar * const pDestination = pDest;

        for(tU32 i = tU32(0U); i < length; ++i)
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

  private:

    __forceinline static bool IsReady()
    {
      return (FLASH::SR::BSY::NotBusy::IsSet()) ;
    }

    static void EraseSector(const tU32 index)
    {
      
      while (!IsReady())
      {
      }
      
      FLASH::CR::SNB::Write(index) ;
      FLASH::CR::SER::Activate::Set() ;
      
      FLASH::CR::STRT::Start::Set() ;

      while (!IsReady())
      {
      }

      FLASH::CR::SER::Clear::Set() ;
      Lock() ;
    }

    static tS32 GetSectorIndex(const tU32 addr)
    {
      tS32 result = tS32(-1) ;
      for(auto & it: Sectors)
      {
        if((it.Start <= addr) && ((it.End >= addr)))
        {
          result = static_cast<tS32>(it.Index) ;
        }
      }
      return result ;
    }

    static constexpr uint32_t FlashCode1  = uint32_t(0x45670123U) ;
    static constexpr uint32_t FlashCode2  = uint32_t(0xCDEF89ABU) ;
    static constexpr tU32 MaxMessageLength = tU32(255U) ;
};

#endif //NDEBUG
#endif //FLASHWRAPPER_HPP
