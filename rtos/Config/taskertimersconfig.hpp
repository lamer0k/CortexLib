// Filename: rtostimersconfig.hpp
// Created by by Sergey Kolody aka Lamerok on 30.03.2020.
//
#pragma once

/*******************************************************************************
 * Filename  	: rtostimersconfig.hpp
 *
 * Details   	: Configuration of RTOS timers
 *
 *   (c) ROSEMOUNT MEASUREMENT LIMITED 2020
 *       THE REPRODUCTION, DISTRIBUTION & UTILISATION OF THIS UNPUBLISHED
 *       WORK AS WELL AS THE COMMUNICATION OF ITS CONTENTS TO OTHERS WITHOUT
 *       EXPRESS AUTHORISATION ISPROHIBITED.OFFENDERS WILL BE HELD LIABLE FOR
 *       THE PAYMENT OF DAMAGES. ALL RIGHTS RESERVED IN THE EVENT OF GRANT OF
 *       PATENT, UTILITY MODEL OR DESIGN.
 *
 *******************************************************************************/

#if !defined(RTOSTIMERSCONFIG_HPP)
#define RTOSTIMERSCONFIG_HPP

#include "taskerconfig.hpp"
#include "taskertimer.hpp"        // For TaskerTimer
#include "taskertimerservice.hpp" // For TaskerTimerService
#include "teststates.hpp"              // for myState
#include <iostream>                      // For std::cout

using MyStateTimer = TaskerTimer<myState, 1'000UL,
                                 1001UL, // time in ms
                                 1,
                                 myTasker>;

using MyStateLowTimer = TaskerTimer<myStateLow, 1'000UL,
                                    1000UL, // time in ms
                                 1,
                                    myTasker>;

using tRtosTimerService = TaskerTimerService<myTasker, MyStateTimer, MyStateLowTimer>;



#endif
