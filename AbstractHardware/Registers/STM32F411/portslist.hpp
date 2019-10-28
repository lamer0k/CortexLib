//
// Created by Sergey on 28.10.2019.
//

#ifndef REGISTERS_PORTSLIST_HPP
#define REGISTERS_PORTSLIST_HPP

#include "susudefs.hpp"  //for TypeList
#include "gpioaregisters.hpp" // for GPIOA
#include "gpiobregisters.hpp" // for GPIOB
#include "gpiocregisters.hpp" // for GPIOC
#include "gpiodregisters.hpp" // for GPIOD
#include "gpioeregisters.hpp" // for GPIOE
#include "gpiohregisters.hpp" // for GPIOH


using PortsList = TypesList<GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOH> ;

#endif //REGISTERS_PORTSLIST_HPP
