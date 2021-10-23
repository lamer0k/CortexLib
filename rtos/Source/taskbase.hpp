// Filename: taskbase.hpp
// Created by by Sergey Kolody  on 05.06.2020.

#pragma once
#include "taskertypes.hpp"


template<typename T>
struct TaskBase
{
	//protected:
	//   template<const auto& ...args>
	//   friend class Tasker ;
	inline static tStateEvents events = static_cast<tStateEvents>(0U);
};


