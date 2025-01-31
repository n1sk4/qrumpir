#pragma once

#include "qrumpir.hpp"

class Qrumpir;

class QrumpirState{
public:
  virtual void enter(Qrumpir* qrumpir) = 0;
  virtual void exit(Qrumpir* qrumpir) = 0;
  virtual ~QrumpirState() {};
};