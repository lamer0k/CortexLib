#pragma once

#include "taskerconfig.hpp" // for tStateEvents

struct IState 
{
    virtual void OnEvent() const = 0 ;
  private:
    friend class Tasker ;
    tStateEvents events ;
} ;


