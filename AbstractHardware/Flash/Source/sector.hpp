/*******************************************************************************
* Filename  	: sector.hpp
*
* Details   	: Definition for Sector structure. Common for al STM32F micro
*
*   (c) ROSEMOUNT MEASUREMENT LIMITED 2019
*       THE REPRODUCTION, DISTRIBUTION & UTILISATION OF THIS UNPUBLISHED
*       WORK AS WELL AS THE COMMUNICATION OF ITS CONTENTS TO OTHERS WITHOUT
*       EXPRESS AUTHORISATION IS PROHIBITED.OFFENDERS WILL BE HELD LIABLE FOR
*       THE PAYMENT OF DAMAGES. ALL RIGHTS RESERVED IN THE EVENT OF GRANT OF
*       PATENT, UTILITY MODEL OR DESIGN.
*
*******************************************************************************/

#if !defined(SECTOR_HPP)
#define SECTOR_HPP

#include "rmldefs.hpp"    // For tU32

//e935: data members  declared as type 'tU32' (aka 'unsigned int')
//For tU32 std::uint32_t is used. This comes from std library
struct Sector
{
  tU32 Start ; //lint !e935
  tU32 End ;   //lint !e935
  tU32 Index ; //lint !e935
} ;

#endif //SECTOR_HPP
