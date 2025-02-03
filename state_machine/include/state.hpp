#pragma once

#include "qrumpir.hpp"

class Qrumpir;

class State{
public:
  virtual void enter(Qrumpir* qrumpir) = 0;
  virtual void run(Qrumpir* qrumpir) = 0;
  virtual void exit(Qrumpir* qrumpir) = 0;
  virtual ~State() {};
};