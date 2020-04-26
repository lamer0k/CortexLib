/*******************************************************************************
* Filename  	: criticalsection.cpp
* 
* Details   	: Critical section are program sections during which preemptive 
*                 task switches and interrupts are disabled, meaning that no 
*                 task switch and no any interrupts. A typical example for a 
*                 critical section would be the execution of a program section 
*                 that handles a time-critical and short hardware access (for 
*                 example quickly writing a small amount of bytes into an EEPROM 
*                 where the bytes must be written in a certain amount of time), 
*                 or depends of design it could be a section that writes data 
*                 into global variables used by a different task and therefore 
*                 needs to make sure the data is consistent. Scheduler is
*                 disabled to avoid running another tasks inside critical 
*                 section.
*
*                 Example of usage of the critical section:
*                 void SomeFunction()
*                 {  
*                   CriticalSection cs;
*                   //do some critical work like EEPROM data written
*                 } ;
*
*                 void SomeFunction1()
*                 {
*                   //do some non-critical work
*                   {
*                     CriticalSection cs ;
*                     //do some critical work like EEPROM data written
*                   }
*                 } ;
*
*   (c) ROSEMOUNT MEASUREMENT LIMITED 2020
*   THE REPRODUCTION, DISTRIBUTION & UTILISATION OF THIS UNPUBLISHED 
*   WORK AS WELL AS THE COMMUNICATION OF ITS CONTENTS TO OTHERS WITHOUT      
*   EXPRESS AUTHORISATION ISPROHIBITED.OFFENDERS WILL BE HELD LIABLE FOR
*   THE PAYMENT OF DAMAGES. ALL RIGHTS RESERVED IN THE EVENT OF GRANT OF        
*   PATENT, UTILITY MODEL OR DESIGN.
*
*******************************************************************************/

#if !defined(CRITICALSECTION_HPP)
#define CRITICALSECTION_HPP

#include <intrinsics.h>         // For intrinsics functions

class CriticalSection
{
  public:
    /***************************************************************************
    * Function Name: CriticalSection
    *
    * Description: Stores current interrupt state, disables interrupts and 
    *              scheduler
    *
    * Assumptions: None
    *
    * Parameters: None
    *
    * Returns: None
    ***************************************************************************/
    CriticalSection() ;
    
    /***************************************************************************
    * Function Name: ~CriticalSection
    *
    * Description: Enables scheduler and restores saved interrupt state
    *
    * Assumptions: None
    *
    * Parameters: None
    *
    * Returns: None
    ***************************************************************************/
    ~CriticalSection() ;
    
  private:
    //e935 data member 'CriticalSection::previousInterruptState' declared as 
    //type '__istate_t' (aka 'unsigned int')
    // This type is defined in standard header file
    const __istate_t previousInterruptState ; //lint !e935
} ;

#endif // !defined(__CRITICALSECTION_HPP)
