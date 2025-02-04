#include "state.hpp"
#include "qrumpir.hpp"

Qrumpir::Qrumpir() {
  m_data = std::make_shared<QrumpirData>();
}

void Qrumpir::setState(State &newState) {
  if (m_currentState) {
    m_currentState->exit(this);
  }
  m_currentState = &newState;
  if (m_currentState) {
    m_currentState->enter(this);
  }
}

void Qrumpir::run() {
  while(m_isRunning) {
    if (m_currentState) {
      m_currentState->run(this);
    }
  }
};

void Qrumpir::stop() {
  m_isRunning = false;
};