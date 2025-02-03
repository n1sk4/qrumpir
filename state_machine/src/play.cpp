#include "play.hpp"

void Play::run(Qrumpir* qrumpir) {
  std::cout << __FUNCTION__ << "\n";
}

void Play::enter(Qrumpir* qrumpir) {
  std::cout << __FUNCTION__ << "\n";
}

void Play::exit(Qrumpir* qrumpir) {
  std::cout << __FUNCTION__ << "\n";
}

State& Play::getInstance() {
  static Play singleton;
  return singleton;
}
