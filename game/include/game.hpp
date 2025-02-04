#pragma once

#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <memory>
#include <thread>

#include "idle.hpp"
#include "eat.hpp"
#include "sleep.hpp"
#include "play.hpp"
#include "cat_idle.hpp"
#include "qrumpir.hpp"

class Game {
public:
  Game();
  ~Game() = default;

private:
  void init();
  void processInput(Qrumpir& qrumpir);

  Qrumpir m_qrumpir;
};

#endif