#include "tasker.hpp" // For Tasker
#include "susudefs.hpp"      // for __forceinline

__forceinline void TaskerSchedule() { Tasker::Schedule(); }

extern "C" {
void Schedule() { TaskerSchedule(); }
}
