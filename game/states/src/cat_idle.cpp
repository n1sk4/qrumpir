#include <chrono>
#include <thread>

#include "cat_idle.hpp"
#include "common.hpp"

void CatIdle::run(Qrumpir* qrumpir) {
  for (int j = 0; j < 3; ++j) {
    Common::moveCursorTo(position, j + 1);
    Common::clearLine();
    std::cout << cat[j] << std::flush;
  }

  Common::moveCursorTo(0, 7);
  std::this_thread::sleep_for(std::chrono::milliseconds(500));

  position += direction;
  if (position == width || position == 0) {
    direction *= -1;
  }
}

void CatIdle::enter(Qrumpir* qrumpir) {
}

void CatIdle::exit(Qrumpir* qrumpir) {
}

State& CatIdle::getInstance() {
    static CatIdle singleton;
    return singleton;
}