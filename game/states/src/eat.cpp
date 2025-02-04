#include "eat.hpp"

void Eat::run(Qrumpir* qrumpir) {
}

void Eat::enter(Qrumpir* qrumpir) {
}

void Eat::exit(Qrumpir* qrumpir) {
}

State& Eat::getInstance() {
  static Eat singleton;
  return singleton;
}
