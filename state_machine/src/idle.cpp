#include "idle.hpp"

void Idle::run(Qrumpir* qrumpir) {
  std::cout << __FUNCTION__ << "\n";
}

void Idle::enter(Qrumpir* qrumpir) {
  std::cout << __FUNCTION__ << "\n";
}

void Idle::exit(Qrumpir* qrumpir) {
  std::cout << __FUNCTION__ << "\n";
}

State& Idle::getInstance() {
  static Idle singleton;
  return singleton;
}
