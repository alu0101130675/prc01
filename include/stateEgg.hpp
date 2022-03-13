#pragma once
#include "state.hpp"
class StateEgg : public State {
 public:
  ~StateEgg() {
    std::cout << "~Derived() is executed\n";
  }
};
