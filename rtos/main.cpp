#include "tasker.hpp"
#include "statesconfig.hpp"

extern "C" 
{
 int __low_level_init(void)   
 {
   	return 1 ;
 }
}

int main()
{
	Tasker::CreateThread(myState, "Test task", StatePriority::normal) ;
	Tasker::Start() ;
  	return 0;
}
