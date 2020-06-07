#pragma once

#include "taskbase.hpp" // for TaskBase

struct IdleTask : public TaskBase<IdleTask>
{
    constexpr IdleTask()
    {

    }

    void OnEvent() const
    {

    }

};

inline constexpr IdleTask idleTask;

