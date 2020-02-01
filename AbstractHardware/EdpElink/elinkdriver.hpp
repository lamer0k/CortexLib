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
  PowerOff = 0x02,
  PowerOn = 0x04,
  BoosterSoftStart = 0x06U,
  DataStartTransmission1 = 0x10U,
  DisplayRefresh = 0x12U,
  DataStartTransmission2 = 0x13U,
  BuildLookupTableForBlackWhite = 0x15,
  VcomLut = 0x20,
  W2wLut = 0x21,
  B2wLut = 0x22,  
  W2bLut = 0x23,
  B2bLut = 0x24,
  PllControl = 0x30,
  VcomAndDataIntervalSetting = 0x50,
  VcmDcSetting = 0x82,
  PartialWindow = 0x90,
  PartialIn = 0x91,
  PartialOut = 0x92,
};

//Soft start period of phase 00b: 10mS
//Driving strength of phase 010b: strength 3
//Minimum OFF time setting of GDR in phase: 111b: 6.58uS
static constexpr auto BtphaDefaultValue = std::uint8_t{0x17} ;
static constexpr auto BtphbDefaultValue = std::uint8_t{0x17} ;
static constexpr auto BtphcDefaultValue = std::uint8_t{0x17} ;

static constexpr auto BlackColor =  std::uint8_t{0xFF} ;

static constexpr auto DispalyWidth =  std::uint16_t{400U} ;
static constexpr auto DispalyHeight = std::uint16_t{300U} ;

static constexpr std::uint16_t RealDisplayWidth = (DispalyWidth % 8U == 0U) ? (DispalyWidth / 8U ): (DispalyWidth / 8U + 1U) ;
static constexpr std::uint16_t RealDisplayHeight = DispalyHeight ;


static constexpr unsigned char EPD_4IN2_lut_vcom0[] = {
    0x00, 0x17, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x17, 0x17, 0x00, 0x00, 0x02,
    0x00, 0x0A, 0x01, 0x00, 0x00, 0x01,
    0x00, 0x0E, 0x0E, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_vcom0_quick[] = {
    0x00, 0x0E, 0x0E, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_ww[] = {
    0x40, 0x17, 0x00, 0x00, 0x00, 0x02,
    0x90, 0x17, 0x17, 0x00, 0x00, 0x02,
    0x40, 0x0A, 0x01, 0x00, 0x00, 0x01,
    0xA0, 0x0E, 0x0E, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_ww_quick[] = {
    0xA0, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_bw[] = {
    0x40, 0x17, 0x00, 0x00, 0x00, 0x02,
    0x90, 0x17, 0x17, 0x00, 0x00, 0x02,
    0x40, 0x0A, 0x01, 0x00, 0x00, 0x01,
    0xA0, 0x0E, 0x0E, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_bw_quick[] = {
    0xA0, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_wb[] = {
    0x80, 0x17, 0x00, 0x00, 0x00, 0x02,
    0x90, 0x17, 0x17, 0x00, 0x00, 0x02,
    0x80, 0x0A, 0x01, 0x00, 0x00, 0x01,
    0x50, 0x0E, 0x0E, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_wb_quick[] = {
    0x50, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_bb[] = {
    0x80, 0x17, 0x00, 0x00, 0x00, 0x02,
    0x90, 0x17, 0x17, 0x00, 0x00, 0x02,
    0x80, 0x0A, 0x01, 0x00, 0x00, 0x01,
    0x50, 0x0E, 0x0E, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static constexpr unsigned char EPD_4IN2_lut_bb_quick[] = {
    0x50, 0x0E, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};


struct BlackAndWhite
{
} ;

template <typename Spi, typename ResetPin, typename DcPin, typename CsPin, typename BusyPin, typename Atribute>
struct ElinkDriver
{
 
  static void SendCommand(ElinkDriverCommands Command)
  {
    //PinsPack<DcPin, CsPin>::Reset() ;    //DEV_Digital_Write(EPD_DC_PIN, 0);   //CsDEV_Digital_Write(EPD_CS_PIN, 0);
    DcPin::Reset() ;
    CsPin::Reset() ;
    Spi::WriteByte(static_cast<std::uint8_t>(Command)) ; //    DEV_SPI_WriteByte(Reg);
    CsPin::Set() ; //    DEV_Digital_Write(EPD_CS_PIN, 1);
    CsPin::Set() ;
  }
  
  
  static void SendData(std::uint8_t data)
  {
    DcPin::Set() ;//DEV_Digital_Write(EPD_DC_PIN, 1);
    CsPin::Reset() ; //DEV_Digital_Write(EPD_CS_PIN, 0);
    Spi::WriteByte(data) ; //    DEV_SPI_WriteByte(Data);
    CsPin::Set() ; //    DEV_Digital_Write(EPD_CS_PIN, 1);
  }
  

  __forceinline static void Refresh()
  {
    SetLut() ;
    SendCommand(ElinkDriverCommands::DisplayRefresh) ;
    SystemClock::SetDelayMs(100) ;
    WaitUntilBusy() ;
  }

  __forceinline template<typename = typename std::enable_if_t<Atribute::template HasAttribute<BlackAndWhite>()>>
  static void RefreshQuick()
  {
    SetLutQuick() ;
    SendCommand(ElinkDriverCommands::DisplayRefresh) ;       
    WaitUntilBusy() ;
  }
  
  
  static void SetLut()
  {
    
    SendCommand(ElinkDriverCommands::VcomLut);         //g vcom
    for(std::uint8_t count = 0; count < 44U; ++count) 
    {
      SendData(EPD_4IN2_lut_vcom0[count]);
    }

    SendCommand(ElinkDriverCommands::W2wLut);
    for(std::uint8_t count = 0; count < 42; ++count) 
    {
      SendData(EPD_4IN2_lut_ww[count]);
    }

    SendCommand(ElinkDriverCommands::B2wLut);
    for(std::uint8_t count = 0; count < 42U; ++count) 
    {
      SendData(EPD_4IN2_lut_bw[count]);
    }

    SendCommand(ElinkDriverCommands::W2bLut);
    for(std::uint8_t count = 0; count < 42U; ++count)  
    {
      SendData(EPD_4IN2_lut_wb[count]);
    }

    SendCommand(ElinkDriverCommands::B2bLut);
    for(std::uint8_t count = 0; count < 42U; ++count) 
    {
      SendData(EPD_4IN2_lut_bb[count]);
    }
  }
  
  template<typename = typename std::enable_if_t<Atribute::template HasAttribute<BlackAndWhite>()>> 
  static void SetLutQuick()
  {
    
    SendCommand(ElinkDriverCommands::VcomLut);         //g vcom
    for(std::uint8_t count = 0; count < 44U; ++count) 
    {
      SendData(EPD_4IN2_lut_vcom0_quick[count]);
    }

    SendCommand(ElinkDriverCommands::W2wLut);
    for(std::uint8_t count = 0; count < 42; ++count) 
    {
      SendData(EPD_4IN2_lut_ww_quick[count]);
    }

    SendCommand(ElinkDriverCommands::B2wLut);
    for(std::uint8_t count = 0; count < 42U; ++count) 
    {
      SendData(EPD_4IN2_lut_bw_quick[count]);
    }

    SendCommand(ElinkDriverCommands::W2bLut);
    for(std::uint8_t count = 0; count < 42U; ++count)  
    {
      SendData(EPD_4IN2_lut_wb_quick[count]);
    }

    SendCommand(ElinkDriverCommands::B2bLut);
    for(std::uint8_t count = 0; count < 42U; ++count) 
    {
      SendData(EPD_4IN2_lut_bb_quick[count]);
    }
  }
  
  __forceinline  template<typename = typename std::enable_if_t<Atribute::template HasAttribute<BlackAndWhite>()>>    
  static void Init()
  {
    Reset();
    SendCommand(ElinkDriverCommands::BoosterSoftStart);
    SendData(BtphaDefaultValue) ;
    SendData(BtphbDefaultValue) ;
    SendData(BtphcDefaultValue) ;
    
    SendCommand(ElinkDriverCommands::PowerOff);
    WaitUntilBusy() ;
    
    SendCommand(ElinkDriverCommands::PowerOn);
    WaitUntilBusy() ;
  
    SendCommand(ElinkDriverCommands::PanelSetting) ;
    SendData(0x3f); // KW-BF   KWR-AF	BWROTP 0f	BWOTP 1f

    SendCommand(ElinkDriverCommands::PllControl); // PLL setting
    SendData(0x3C); // 3A 100HZ   29 150Hz 39 200HZ	31 171HZ
 
    SendCommand(ElinkDriverCommands::VcmDcSetting); // vcom_DC setting
    SendData(0x3A);

    SendCommand(ElinkDriverCommands::VcomAndDataIntervalSetting); // VCOM AND DATA INTERVAL SETTING
    SendData(0x97); // 97white border 77black border		VBDF 17|D7 VBDW 97 VBDB 57		VBDF F7 VBDW 77 VBDB 37  VBDR B7

    SetLut();
  }
  
  
  static void UpdatePartialWindow(const std::uint8_t *bufferBlack,
                               std::uint16_t x,
                               std::uint16_t y,
                               std::uint16_t width,
                               std::uint16_t height                               
                               )
  {
    const size_t counts  = (width / 8) * height ;
    
    SetPartialMode() ;
    SendCommand(ElinkDriverCommands::PartialWindow) ;
    SendData(x >> 8U) ;
    SendData(x & 0xf8) ;
    SendData(((x & 0xf8) + width - 1U) >> 8) ;
    SendData(((x & 0xf8) + width - 1U) | 0x07U) ;
    SendData(y >> 8) ;
    SendData( y & 0xff) ;
    SendData((y + height - 1U) >> 8U) ;
    SendData((y + height - 1U) & 0xff) ;
    SendData(0x01) ;
    SendCommand(ElinkDriverCommands::DataStartTransmission2);
    for (size_t j = 0; j < counts; ++j)
    {
       SendData(bufferBlack[j]);
    }
    SendCommand(ElinkDriverCommands::PartialWindow) ;
 //   ClearPartialMode() ;
    RefreshQuick();
  }
  
  static void SetPartialMode()
  {
    SendCommand(ElinkDriverCommands::PartialIn) ;
  }
 
  static void ClearPartialMode()
  {
    SendCommand(ElinkDriverCommands::PartialOut) ;
  }
  
  static void Clear()
  {
 
    SendCommand(ElinkDriverCommands::DataStartTransmission1) ;
    for (std::uint16_t j = 0; j < RealDisplayHeight;  ++j)
    {
      for (std::uint16_t i = 0; i < RealDisplayWidth; ++i)
      {
        SendData(BlackColor) ;
      }
    }
  
    SendCommand(ElinkDriverCommands::DataStartTransmission2);
   for (std::uint16_t j = 0; j < RealDisplayHeight; ++j)
    {
      for (std::uint16_t i = 0; i < RealDisplayWidth; ++i) 
      {
        SendData(BlackColor);
      }
    }
    Refresh();
 
  }
  
  
  /******************************************************************************
function :	Sends the image buffer in RAM to e-Paper and displays
parameter:
******************************************************************************/
static void Display(const uint8_t *blackimage, const uint8_t *ryimage)
{   
 // SendCommand(ElinkDriverCommands::DataStartTransmission1);
 // for (std::uint16_t j = 0; j < RealDisplayHeight;  ++j) 
 // {
 //    for (std::uint16_t i = 0; i < RealDisplayWidth; ++i) 
 //    {
 //           SendData(blackimage[i + j * RealDisplayWidth]);
 //    }
 // }

    SendCommand(ElinkDriverCommands::DataStartTransmission2);
    for (std::uint16_t j = 0; j < RealDisplayHeight; ++j)
    {
      for (std::uint16_t i = 0; i < RealDisplayWidth; ++i) 
      {
           SendData(ryimage[i + j * RealDisplayWidth]);
      }
    }
   RefreshQuick();
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
      SystemClock::SetDelayMs(10) ;
    }
  }
};

#endif //REGISTERS_ELINKDRIVER_HPP
