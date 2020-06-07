#pragma once

#include "taskertypes.hpp" // For tTaskEvents

template <auto& targetThread, std::uint32_t TimerFrequency, std::uint32_t msPeriod, tStateEvents eventsToPost, typename Tasker>
class TaskerTimer {
  public:
    static void OnTick()
    {
      --ticksRemain ;
      if (ticksRemain == 0U)
      {       
        ticksRemain = ticksReload ;
        Tasker::PostEvent<targetThread>(eventsToPost) ;
      }
    }
    
  private:
    static constexpr std::uint32_t msInSec = 1000UL ;
    static constexpr std::uint32_t ticksReload =
    static_cast<std::uint32_t>((msPeriod * TimerFrequency) / msInSec) ;

    static_assert((ticksReload != 0UL), "Too small msPeriod");

    static inline std::uint32_t ticksRemain = ticksReload ;
} ;


