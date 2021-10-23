/*******************************************************************************
* Filename  	: criticalsection.cpp
* 
* Created by by Sergey Kolody aka Lamerok on 31.03.2020.
*******************************************************************************/

#if !defined(CRITICALSECTION_HPP)
#define CRITICALSECTION_HPP

#include <intrinsics.h>         // For intrinsics functions

class CriticalSection
{
public:

	CriticalSection();

	~CriticalSection();

private:
	const __istate_t previousInterruptState;
};

#endif // !defined(__CRITICALSECTION_HPP)
