#include "qrumpir.hpp"
#include <iostream>
#include <qrumpir_concrete_states.hpp>

int main() {
  std::cout << "Hello World";
  Qrumpir crumpir;
  std::cout << "\n";
  crumpir.setState(QrumpirEat::getInstance());
  std::cout << "\n";
  crumpir.setState(QrumpirPlay::getInstance());
  std::cout << "\n";
  crumpir.setState(QrumpirSleep::getInstance());
  std::cout << "\n";
}