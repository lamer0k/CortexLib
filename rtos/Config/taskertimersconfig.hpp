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
#include "teststates.hpp"              // for myThread1
#include <iostream>                      // For std::cout

using MyThread1Timer = TaskerTimer<myThread1, 1'000UL,
                                   1001UL, // time in ms
                                   1,
                                   myTasker>;

using MyThread2Timer = TaskerTimer<myThread2, 1'000UL,
                                   1000UL, // time in ms
                                   1,
                                   myTasker>;

using tRtosTimerService = TaskerTimerService<myTasker, MyThread1Timer, MyThread2Timer>;

#endif
