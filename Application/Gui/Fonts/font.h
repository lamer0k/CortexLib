/*******************************************************************************
*  FILENAME: font5_8.h
*
*  DESCRIPTION: 
*
*  Copyright (c) 2015 by South Ural State Universaty
*  Author: Sergey Kolody*
******************************************************************************/
#ifndef FONT_H
#define FONT_H

// !FIXME
typedef struct
{
  std::uint16_t width;
  std::uint16_t index;
}tFontDescriptor;

typedef struct 
{
  std::uint8_t height;		// ������ ��������
  std::uint8_t firstIndex;
  std::uint32_t charsCount;
  std::uint8_t spaceSize;
  const tFontDescriptor* fontIndex; //Index of Font
  const std::uint8_t* fontTable;	// ������ ������ ������
} tFont;



#endif //FONT_H