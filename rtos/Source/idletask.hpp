// Filename: taskertypes.hpp
// Created by by Sergey Kolody aka Lamerok on 29.03.2020.

#pragma once

#include "taskbase.hpp" // for TaskBase
#include "gpioaregisters.hpp"

struct IdleTask : public TaskBase<IdleTask>
{
    constexpr IdleTask()
    {

    }

    void OnEvent() const
    {
        GPIOA::ODR::Toggle(1<<5);
    }

};

inline constexpr IdleTask idleTask;

