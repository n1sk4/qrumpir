#include "qrumpir.hpp"
#include "idle.hpp"
#include "eat.hpp"
#include "sleep.hpp"
#include "play.hpp"

Qrumpir::Qrumpir() {
  m_currentState = &Sleep::getInstance();
  m_data = std::make_shared<QrumpirData>();
}

void Qrumpir::setState(State &newState) {
  m_currentState->exit(this);
  m_currentState = &newState;
  m_currentState->enter(this);
  m_currentState->run(this);
}