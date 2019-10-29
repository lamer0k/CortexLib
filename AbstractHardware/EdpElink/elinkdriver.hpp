//
// Created by Sergey on 26.10.2019.
//

#ifndef REGISTERS_ELINKDRIVER_HPP
#define REGISTERS_ELINKDRIVER_HPP

#include "susudefs.hpp"  //for __forceinline
#include "systemclock.hpp" //for SystemClock


enum class ElinkDriverCommands : std::uint8_t
{
  PanelSetting = 0x0,
  PowerOn = 0x04,
  BoosterSoftStart = 0x06U,
  DataStartTransmission1 = 0x10U,
  DisplayRefresh = 0x12U,
  DataStartTransmission2 = 0x13U,
  BuildLookupTableForBlackWhite = 0x15
};

//Soft start period of phase 00b: 10mS
//Driving strength of phase 010b: strength 3
//Minimum OFF time setting of GDR in phase: 111b: 6.58uS
constexpr std::uint8_t BtphaDefaultValue = std::uint8_t{0x17} ;
constexpr std::uint8_t BtphbDefaultValue = std::uint8_t{0x17} ;
constexpr std::uint8_t BtphcDefaultValue = std::uint8_t{0x17} ;

constexpr std::uint8_t BlackColor =  std::uint8_t{0xFF} ;

constexpr std::uint16_t DispalyWidth =  std::uint16_t{400U} ;
constexpr std::uint16_t DispalyHeight = std::uint16_t{300U} ;

constexpr std::uint16_t RealDisplayWidth = (DispalyWidth % 8 == 0) ? (DispalyWidth / 8 ): (DispalyWidth / 8 + 1) ;
constexpr std::uint16_t RealDisplayHeight = DispalyHeight ;



template <typename Spi, typename ResetPin, typename DcPin, typename CsPin, typename BusyPin>
struct ElinkDriver
{
 
  
  __forceinline static void SendCommand(ElinkDriverCommands Command)
  {
    PinsPack<DcPin, CsPin>::Reset() ;    //DEV_Digital_Write(EPD_DC_PIN, 0);   //CsDEV_Digital_Write(EPD_CS_PIN, 0);
    Spi::WriteByte(static_cast<std::uint8_t>(Command)) ; //    DEV_SPI_WriteByte(Reg);
    CsPin::Set() ; //    DEV_Digital_Write(EPD_CS_PIN, 1);
  }
  
  __forceinline static void SendData(std::uint8_t data)
  {
    DcPin::Set() ;//DEV_Digital_Write(EPD_DC_PIN, 1);
    CsPin::Reset() ; //DEV_Digital_Write(EPD_CS_PIN, 0);
    Spi::WriteByte(data) ; //    DEV_SPI_WriteByte(Data);
    CsPin::Set() ; //    DEV_Digital_Write(EPD_CS_PIN, 1);
  }
  
  
  __forceinline static void TurnOnDisplay()
  {
    SendCommand(ElinkDriverCommands::DisplayRefresh) ;
    SystemClock::SetDelayMs(100) ;
    WaitUntilBusy() ;
  }
  
  __forceinline static void Init()
  {
    Reset();
    SendCommand(ElinkDriverCommands::BoosterSoftStart);
    SendData(BtphaDefaultValue) ;
    SendData(BtphbDefaultValue) ;
    SendData(BtphcDefaultValue) ;
    
    SendCommand(ElinkDriverCommands::PowerOn);
    WaitUntilBusy() ;
  
    SendCommand(ElinkDriverCommands::PanelSetting) ;
    SendCommand(ElinkDriverCommands::BuildLookupTableForBlackWhite) ;
  }
  
  __forceinline static void Clear()
  {
 
    SendCommand(ElinkDriverCommands::DataStartTransmission1) ;
    for (std::uint16_t j = 0; j < RealDisplayHeight;  ++j)
    {
      for (std::uint16_t i = 0; i < RealDisplayWidth; ++i)
      {
        SendData(BlackColor) ;
      }
    }
  
    SendCommand(ElinkDriverCommands::DataStartTransmission1);
    for (std::uint16_t j = 0; j < RealDisplayHeight; ++j)
    {
      for (std::uint16_t i = 0; i < RealDisplayWidth; ++i) {
        SendData(BlackColor);
      }
    }
    TurnOnDisplay();
  }
  
private:
  __forceinline static void Reset()
  {
    ResetPin::Set() ;
    SystemClock::SetDelayMs(200) ;
    ResetPin::Reset() ;
    SystemClock::SetDelayMs(200) ;
    ResetPin::Set() ;
    SystemClock::SetDelayMs(200) ;
  }
  
  __forceinline static auto IsBusy()
  {
    auto result = BusyPin::Get() ;
    return (result == static_cast<decltype(result)> (1U)) ;
  }
  
  __forceinline static void WaitUntilBusy()
  {
    while (!IsBusy())
    {
      SystemClock::SetDelayMs(100) ;
    }
  }
};

#endif //REGISTERS_ELINKDRIVER_HPP
