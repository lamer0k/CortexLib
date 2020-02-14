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


struct Sector
{
  std::size_t Start ; //lint !e935
  std::size_t End ;   //lint !e935
  std::size_t Index ; //lint !e935
} ;

#endif //SECTOR_HPP
