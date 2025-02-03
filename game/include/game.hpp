#pragma once

#include "idle.hpp"
#include "eat.hpp"
#include "sleep.hpp"
#include "play.hpp"
#include "qrumpir.hpp"

#include <iostream>
#include <memory>

class Game {
public:
  Game();
  ~Game() = default;

private:
  void init();
  void processInput(char input, Qrumpir& qrumpir);
};