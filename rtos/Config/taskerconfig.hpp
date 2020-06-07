// Filename: taskerconfig.hpp
// Created by by Sergey Kolody  on 04.06.2020.
//
// Copyright (c) 2020 Metran All rights reserved.
#pragma once
#include "teststates.hpp"
#include "idletask.hpp"
#include "tasker.hpp"

class myTasker : public Tasker<targetThread, myState, myStateLow, idleTask> {} ;
