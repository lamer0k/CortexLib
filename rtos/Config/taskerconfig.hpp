// Filename: taskerconfig.hpp
// Created by by Sergey Kolody  on 04.06.2020.

#pragma once
#include "teststates.hpp" // for targetThread, myThread1, myThread2,
#include "idletask.hpp"   // for idleTask
#include "tasker.hpp"     // for Tasker

class myTasker: public Tasker<targetThread, myThread1, myThread2, idleTask>
{
};
