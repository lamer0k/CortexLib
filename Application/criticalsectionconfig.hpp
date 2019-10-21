//
// Created by Sergey on 20.10.2019.
//

#ifndef REGISTERS_CRITICALSECTIONCONFIG_HPP
#define REGISTERS_CRITICALSECTIONCONFIG_HPP

#include "criticalsectionguard.hpp"  //for CriticalSectionGuard
#include "criticalsectiondefault.hpp" //for CriticalSectionDefault

using CriticalSection = CriticalSectionGuard<CriticalSectionDefault> ;
#endif //REGISTERS_CRITICALSECTIONDEFAULTCONFIG_HPP
