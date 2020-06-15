// Filename: taskertypes.hpp
// Created by by Sergey Kolody aka Lamerok on 29.03.2020.
#pragma once

template <typename Tasker, typename ...Timers>
struct TaskerTimerService {
    static void OnSystemTick()
    {
        Tasker::IsrEntry() ;
        (Timers::OnTick(), ...) ;
        Tasker::IsrExit() ;
    }
} ;

