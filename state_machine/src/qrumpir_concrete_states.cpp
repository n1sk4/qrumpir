#include "qrumpir_concrete_states.hpp"

QrumpirState& QrumpirEat::getInstance() {
  static QrumpirEat singleton;
  return singleton;
}

QrumpirState& QrumpirSleep::getInstance() {
  static QrumpirSleep singleton;
  return singleton;
}

QrumpirState& QrumpirPlay::getInstance() {
  static QrumpirPlay singleton;
  return singleton;
}