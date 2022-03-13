#include <iostream>
#pragma once

class Grid;
class State {
 public:
  virtual int State::vecinos(const Grid&, int i, int j) = 0;
  virtual State* State::nextState()=0;  
  virtual char State::getState() const =0;
};
