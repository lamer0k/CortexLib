//
// Created by Sergey Kolody aka Lamerok on 31.03.2020.
//

#include "criticalregion.hpp" // for CriticalRegion
#include "taskerconfig.hpp"

CriticalRegion::CriticalRegion()
{
	myTasker::DisableScheduler();
}

CriticalRegion::~CriticalRegion()
{
	myTasker::EnableScheduler();
}