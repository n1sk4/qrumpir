#pragma once

#ifndef IDLE_HPP
#define IDLE_HPP

#include <iostream>

#include "state.hpp"
#include "qrumpir.hpp"

class Idle : public State {
public:
  void enter(Qrumpir* qrumpir) override;
  void run(Qrumpir* qrumpir) override;
  void exit(Qrumpir* qrumpir) override;
  static State& getInstance();

protected:
  Idle() {};
  Idle& operator=(const Idle& other) = delete;
  std::shared_ptr<QrumpirData> m_data;
};

#endif