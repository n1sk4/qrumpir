#pragma once

#ifndef PLAY_HPP
#define PLAY_HPP

#include <iostream>

#include "state.hpp"
#include "qrumpir.hpp"

class Play : public State {
public:
  void enter(Qrumpir* qrumpir) override;
  void run(Qrumpir* qrumpir) override;
  void exit(Qrumpir* qrumpir) override;
  static State& getInstance();

protected:
  Play() {};
  Play& operator=(const Play& other) = delete;
  std::shared_ptr<QrumpirData> m_data;
};

#endif