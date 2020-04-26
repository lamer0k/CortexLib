#pragma once

#include "tasker.hpp" // For Tasker

template <typename ...Timers>
struct TaskerTimerService {
    static void OnSystemTick()
    {
        Tasker::IsrEntry() ;
        (Timers::OnTick(), ...) ;
        Tasker::IsrExit() ;
    }
} ;

