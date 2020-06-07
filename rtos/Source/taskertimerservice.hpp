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

