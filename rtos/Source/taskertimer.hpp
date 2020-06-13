#pragma once

#include "taskertypes.hpp" // For tTaskEvents
#include "chrono"

template <typename Tasker, std::uint32_t TimerFrequency, std::uint32_t msPeriod, tStateEvents eventsToPost, const auto& ...targetThreads>
class TaskerTimer {
  public:
    static void OnTick()
    {
      --ticksRemain ;
      if (ticksRemain == 0U)
      {       
        ticksRemain = ticksReload ;
        Tasker::template PostEvent<targetThreads...>(eventsToPost) ;
      }
    }
    
  private:

    static constexpr std::uint32_t msInSec = 1000UL ;
    static constexpr std::uint32_t ticksReload =
    static_cast<std::uint32_t>((msPeriod * TimerFrequency) / msInSec) ; // UB может быть

    static_assert((TimerFrequency <= 10'000U), "Timer Frequency could not be more than 10 000Hz");
    static_assert((msPeriod <= 400'000U), "msPeriod too big ");

    static_assert((ticksReload != 0UL), "msPeriod too small");

    static inline volatile std::uint32_t ticksRemain = ticksReload ;
} ;


