#pragma once

#ifndef CAT_IDLE_HPP
#define CAT_IDLE_HPP

#include <iostream>

#include "idle.hpp"
#include "qrumpir.hpp"

class CatIdle : public Idle {
public:
  void enter(Qrumpir* qrumpir) override;
  void run(Qrumpir* qrumpir) override;
  void exit(Qrumpir* qrumpir) override;
  static State& getInstance();

private:
  CatIdle() {};
  CatIdle& operator=(const CatIdle& other) = delete;
  std::shared_ptr<QrumpirData> m_data;

  const int width = 20; // Width of the animation
  static constexpr const char* cat[3] = {
      "  /\\_/\\  ",
      " ( o.o ) ",
      "  > ^ <  "
  };

  int position = 0;
  int direction = 1; // 1 for right, -1 for left
};

#endif