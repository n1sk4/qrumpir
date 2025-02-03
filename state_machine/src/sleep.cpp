#include "sleep.hpp"

void Sleep::run(Qrumpir* qrumpir) {
  std::cout << __FUNCTION__ << "\n";
}

void Sleep::enter(Qrumpir* qrumpir) {
  std::cout << __FUNCTION__ << "\n";
}

void Sleep::exit(Qrumpir* qrumpir) {
  std::cout << __FUNCTION__ << "\n";
}

State& Sleep::getInstance() {
  static Sleep singleton;
  return singleton;
}
