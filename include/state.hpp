#include <iostream>
#pragma once

class Grid;
class State {
 public:
 //forma de definir la vecindad, así como la cuenta de los tipos de las células
 //vecinas de la que dependen las reglas de transición,
 // virtual int vecinos(const Grid&, int i, int j) = 0;
  //reglas de transicion
  //Devuelve la letra inicial del estado
  virtual char getState() const =0;
};
