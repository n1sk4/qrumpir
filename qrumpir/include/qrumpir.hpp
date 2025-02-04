#pragma once

#ifndef QRUMPIR_HPP
#define QRUMPIR_HPP

#include <memory>
#include <atomic>

#include "state.hpp"

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
  void run();
  void stop();

  std::shared_ptr<QrumpirData> m_data;

private:
  State* m_currentState = nullptr;
  std::atomic<bool> m_isRunning {true};
};

#endif