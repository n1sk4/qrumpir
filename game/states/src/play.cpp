#include "play.hpp"

void Play::run(Qrumpir* qrumpir) {
}

void Play::enter(Qrumpir* qrumpir) {
}

void Play::exit(Qrumpir* qrumpir) {
}

State& Play::getInstance() {
  static Play singleton;
  return singleton;
}
