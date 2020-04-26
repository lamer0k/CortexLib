//
// Created by Sergey Kolody aka Lamerok on 31.03.2020.
//

#include "criticalregion.hpp" // for CriticalRegion
#include "tasker.hpp"

CriticalRegion::CriticalRegion()
{
	Tasker::DisableScheduler() ;
}

CriticalRegion::~CriticalRegion()
{
	Tasker::EnableScheduler() ;
}