#include "qrumpir.hpp"
#include "qrumpir_concrete_states.hpp"

Qrumpir::Qrumpir() {
  m_currentState = &QrumpirSleep::getInstance();
}

void Qrumpir::setState(QrumpirState &newState) {
  m_currentState->exit(this);
  m_currentState = &newState;
  m_currentState->enter(this);
}