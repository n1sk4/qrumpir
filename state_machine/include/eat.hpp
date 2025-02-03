#pragma once

#include "state.hpp"
#include "qrumpir.hpp"
#include <iostream>

class Eat : public State {
public:
  void enter(Qrumpir* qrumpir) override;
  void run(Qrumpir* qrumpir) override;
  void exit(Qrumpir* qrumpir) override;
  static State& getInstance();

private:
  Eat() {};
  Eat& operator=(const Eat& other) = delete;
  std::shared_ptr<QrumpirData> m_data;
};