#pragma once

#include "state.hpp"
#include <memory>

class State;

struct QrumpirData {
  virtual ~QrumpirData() = default;
  unsigned long hunger    = 0;
  unsigned long happiness = 0;
  unsigned long energy    = 0;
};

class Qrumpir {
public:
  Qrumpir();
  State* getCurrentState() const { return m_currentState; };
  void setState(State& newState);
  std::shared_ptr<QrumpirData> m_data;

private:
  State* m_currentState;
};