// Filename: testthread.hpp
// Created by by Sergey aka Lamerok on 30.03.2020.

#pragma once
#include <iostream> // for cout
#include "taskbase.hpp" // for TaskBase
#include "gpiocregisters.hpp"


struct TargetThread: public TaskBase<TargetThread>
{
    constexpr TargetThread()    {   }
    void OnEvent() const
    {
      GPIOC::ODR::Toggle(1<<8);
    //  std::cout << "TargetThread" << std::endl;
    }

};
inline constexpr TargetThread targetThread;

template<typename SimpleTasker, auto& threadToSignal>
struct Thread1 : public TaskBase<Thread1<SimpleTasker, threadToSignal>>
{
    constexpr Thread1()   {   }
    void OnEvent() const
    {
    //    std::cout << "  Thread1Start" << std::endl;
        GPIOC::ODR::Toggle(1<<9);
        SimpleTasker::PostEvent<threadToSignal>(1);
      //  std::cout << "  Thread1End" << std::endl;
    }
};

template<typename SimpleTasker, auto& threadToSignal>
struct Thread2 : public TaskBase<Thread2<SimpleTasker, threadToSignal>>
{
    constexpr Thread2()    { }
    void OnEvent() const
    {
        GPIOC::ODR::Toggle(1<<5);
    //    std::cout << "    Thread2Start" << std::endl;
        for (int i = 0; i < 4000000; ++i)
        {
        };
        SimpleTasker::PostEvent<threadToSignal>(1);
     //   std::cout << "    Thread2End: " << test << std::endl;
        test ++ ;
    }
 private:
    inline static int test ;
};

class myTasker;
inline constexpr Thread1<myTasker, targetThread> myThread1;
inline constexpr Thread2<myTasker, targetThread> myThread2;




