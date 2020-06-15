// Filename: taskerconfig.hpp
// Created by by Sergey Kolody  on 04.06.2020.

#pragma once
#include "teststates.hpp"
#include "idletask.hpp"
#include "tasker.hpp"

class myTasker : public Tasker<targetThread, myThread1, myThread2, idleTask> {} ;
