#pragma once

#include "istate.hpp" // for IState

struct IdleTask : IState {
  void OnEvent() const override {
    while (true) {

    }
  }
};
