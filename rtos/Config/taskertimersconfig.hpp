// Filename: rtostimersconfig.hpp
// Created by by Sergey Kolody aka Lamerok on 30.03.2020.
//
#pragma once

#include "taskerconfig.hpp"
#include "taskertimer.hpp"        // For TaskerTimer
#include "taskertimerservice.hpp" // For TaskerTimerService
#include "teststates.hpp"         // for myThread1
#include "idletask.hpp"           // for  idleTask

using MyThread1Timer = TaskerTimer<myTasker, 1'000UL,
								   1001UL, // time in ms
								   1,
								   myThread1>;

using MyThread2Timer = TaskerTimer<myTasker, 1'000UL,
								   1000UL, // time in ms
								   1,
								   myThread2>;

using IdleTimer = TaskerTimer<myTasker, 1'000UL,
							  100UL, // time in ms
							  1,
							  idleTask
>;

using tRtosTimerService = TaskerTimerService<myTasker, MyThread1Timer, MyThread2Timer, IdleTimer>;


