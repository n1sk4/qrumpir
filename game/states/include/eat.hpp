#pragma once

#ifndef EAT_HPP
#define EAT_HPP

#include <iostream>

#include "state.hpp"
#include "qrumpir.hpp"

class Eat : public State {
public:
  void enter(Qrumpir* qrumpir) override;
  void run(Qrumpir* qrumpir) override;
  void exit(Qrumpir* qrumpir) override;
  static State& getInstance();

protected:
  Eat() {};
  Eat& operator=(const Eat& other) = delete;
  std::shared_ptr<QrumpirData> m_data;
};

#endif