#include "eat.hpp"

void Eat::run(Qrumpir* qrumpir) {
  std::cout << __FUNCTION__ << "\n";
}

void Eat::enter(Qrumpir* qrumpir) {
  std::cout << __FUNCTION__ << "\n";
}

void Eat::exit(Qrumpir* qrumpir) {
  std::cout << __FUNCTION__ << "\n";
}

State& Eat::getInstance() {
  static Eat singleton;
  return singleton;
}
