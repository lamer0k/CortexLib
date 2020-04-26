// Filename: testthread.hpp
// Created by by Sergey aka Lamerok on 30.03.2020.

#pragma once

#include "Source/tasker.hpp"
#include <iostream> // for cout

struct TestThread1 : IState {
  void OnEvent() const override
  {
    std::cout << "Test1" << std::endl ;
  }
};

extern TestThread1 targetThread ;

struct TestThread : IState {
  void OnEvent() const override
  {
    std::cout << "Test" << std::endl ;
    Tasker::PostEvent(targetThread, 1) ;
  }
};



