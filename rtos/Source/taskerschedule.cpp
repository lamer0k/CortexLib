// Filename: taskertypes.hpp
// Created by by Sergey Kolody aka Lamerok on 29.03.2020.

#include "susudefs.hpp"      // for __forceinline
#include "taskerconfig.hpp"  // die 

__forceinline void TaskerSchedule()
{
	myTasker::Schedule();
}


extern "C"
{

void Schedule()
{
	TaskerSchedule();
}
}
