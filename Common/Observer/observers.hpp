//
// Created by Sergey Kolody on 19.01.2020.
//

#ifndef REGISTERS_OBSERVERS_HPP
#define REGISTERS_OBSERVERS_HPP

template<typename... TObserver>
struct Observers
{
    static void OnUpdate()
    {
        (TObserver::OnUpdate(), ...) ;
    }

} ;
#endif //REGISTERS_OBSERVERS_HPP
