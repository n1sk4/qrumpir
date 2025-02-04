#pragma once

#ifndef SLEEP_HPP
#define SLEEP_HPP

#include <iostream>

#include "state.hpp"
#include "qrumpir.hpp"

class Sleep : public State {
public:
  void enter(Qrumpir* qrumpir) override;
  void run(Qrumpir* qrumpir) override;
  void exit(Qrumpir* qrumpir) override;
  static State& getInstance();

protected:
  Sleep() {};
  Sleep& operator=(const Sleep& other) = delete;
  std::shared_ptr<QrumpirData> m_data;
};

#endif