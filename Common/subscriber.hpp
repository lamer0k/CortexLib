//
// Created by SKolody on 17.10.2019.
//

#ifndef REGISTERS_SUBSRIBER_HPP
#define REGISTERS_SUBSRIBER_HPP

struct ISubscriber
{
  constexpr ISubscriber() = default; ;
  virtual void Update() const  = 0;
};

#endif //REGISTERS_SUBSRIBER_HPP
