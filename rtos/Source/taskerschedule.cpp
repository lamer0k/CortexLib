#include "susudefs.hpp"      // for __forceinline
#include "taskerconfig.hpp"

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
