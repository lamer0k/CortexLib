// Filename: testthread.hpp
// Created by by Sergey aka Lamerok on 30.03.2020.

#pragma once
#include <iostream> // for cout
#include "taskbase.hpp" // for TaskBase


struct TargetThread: public TaskBase<TargetThread>
{
    constexpr TargetThread()
    {
    }
    void OnEvent() const
    {
        std::cout << "Thread" << std::endl;
    }

};
inline constexpr TargetThread targetThread;

template<typename SimpleTasker, auto& threadToSignal>
struct State : public TaskBase<State<SimpleTasker, threadToSignal>>
{
    constexpr State()
    {
    }
    void OnEvent() const
    {
        std::cout << "  StateQuickStart" << std::endl;
        SimpleTasker::PostEvent<threadToSignal>(1);
        std::cout << "  StateQuickEnd" << std::endl;
    }
};

template<typename SimpleTasker, auto& threadToSignal>
struct StateLow : public TaskBase<StateLow<SimpleTasker, threadToSignal>>
{
    constexpr StateLow()
    {
    }
    void OnEvent() const
    {
        std::cout << "    StateLongStart" << std::endl;
        for (int i = 0; i < 4000000; ++i)
        {
        };
        SimpleTasker::PostEvent<threadToSignal>(1);
        std::cout << "    StateLongEnd: " << test << std::endl;
        test ++ ;
    }
 private:
    inline static int test ;
};

class myTasker;
inline constexpr State<myTasker, targetThread> myState;
inline constexpr StateLow<myTasker, targetThread> myStateLow;




