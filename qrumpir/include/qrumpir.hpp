#pragma once

#include "qrumpir_state.hpp"

class QrumpirState;

class Qrumpir {
public:
  Qrumpir();
  QrumpirState* getCurrentState() const { return m_currentState; };
  void setState(QrumpirState& newState);

private:
  QrumpirState* m_currentState;
};