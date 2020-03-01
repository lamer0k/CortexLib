/*******************************************************************************
*  FILENAME: Flashwrapper.cpp
*
*  Copyright (c) 2020 by SUSU INIT
*
*******************************************************************************/

#if !defined(FLASHWRAPPER_HPP)
#define FLASHWRAPPER_HPP

#include "susudefs.hpp"   // for __forceinline
#include "flashregisters.hpp" // for Flash
#include <cstddef>  // for std::size_t
#include <cassert>  // for assert

//static_assert(STM32F303xx == 1,
//              "This implementation only for STM32F303R micro") ;

constexpr std::size_t SectorsCount = 255U ;
constexpr std::size_t SectorsStartAddr = 0x0800'0000U;
constexpr std::size_t SectorsSize = 0x800U;


class FlashWrapper
{
  public:
    __forceinline static void Unlock()
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
    //  assert((addr >= SectorsStartAddr) && (addr < (SectorsStartAddr + SectorsCount * SectorsSize))) ;
      EraseSector(addr) ;
    }
    
    
    template<typename T>
    static void Write( T value, const T * const pDest)
    {
      //Проверим, что адрес не выходит за границу страницы, предполагаем, что все одной странице
      assert(((reinterpret_cast<std::size_t>(&pDest) - SectorsStartAddr) / SectorsSize ) ==
             ((reinterpret_cast<std::size_t>(&pDest) - SectorsStartAddr + sizeof(T))/ SectorsSize)) ;
      
      assert(pDest != nullptr) ;
      
      while(!IsReady())
      {
      }

      FLASH::CR::PG::StartProgram::Set() ;

      const auto* const pSource = reinterpret_cast<std::uint16_t *>(&value); //писать надо по пол слова
      auto* const pDestination = reinterpret_cast<std::uint16_t *>(const_cast<T *>(pDest)); //писать надо по пол слова
        
      //если размер не четный, то писать все равно надо пол слова.
      std::size_t Size = ((sizeof(T) % 2) == 0) ? sizeof(T) / 2 : (sizeof(T) / 2 + 1) ;
        
      for(std::size_t i = 0U ; i < Size ; ++i)
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
      FLASH::AR::Write(addr) ;
      
      FLASH::CR::STRT::Start::Set() ;
      //The software should start checking if the BSY bit equals ‘0’ at least one CPU cycle after setting the STRT bit.
      // так что просто один дополнительный запрос, чтобы сразу на проверку Busy не пойти
      FLASH::CR::STRT::Start::Set() ;
      
      while (!IsReady())
      {
      }

      while (FLASH::SR::EOP::NotComplete::IsSet())
      {
      };
      
      while (FLASH::SR::EOP::Complete::IsSet())
      {
        FLASH::SR::EOP::Complete::Set() ;
        
      };
      FLASH::CR::PER::Clear::Set() ;
      Lock() ;
    }

    static constexpr std::uint32_t FlashCode1  = 0x45670123U ;
    static constexpr std::uint32_t FlashCode2  = 0xCDEF89ABU ;
    
};

#endif //FLASHWRAPPER_HPP
