#include "sleep.hpp"

void Sleep::run(Qrumpir* qrumpir) {
}

void Sleep::enter(Qrumpir* qrumpir) {
}

void Sleep::exit(Qrumpir* qrumpir) {
}

State& Sleep::getInstance() {
  static Sleep singleton;
  return singleton;
}
