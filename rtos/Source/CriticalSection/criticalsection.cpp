
#include "criticalsection.hpp" // CriticalSection header file
#include "tasker.hpp"   // For Tasker

CriticalSection::CriticalSection() : 
  previousInterruptState(__get_interrupt_state())
{
  __disable_interrupt() ;
}

CriticalSection::~CriticalSection()
{

  __set_interrupt_state(previousInterruptState) ;
}
