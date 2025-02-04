#include <mutex>
#include <limits>

#include "game.hpp"
#include "common.hpp"

std::mutex mtx;

Game::Game()
{
  init();
}

void Game::init()
{
  Common::clearScreen();
  Common::moveCursorTo(0, 0);

  std::thread inputThread(&Game::processInput, this, std::ref(m_qrumpir));
  std::thread stateMachineThread(&Qrumpir::run, &m_qrumpir);

  stateMachineThread.join();
  inputThread.join();
}

void Game::processInput(Qrumpir &qrumpir)
{
  char input;
  qrumpir.setState(Sleep::getInstance());

  while (true) {
    {
      std::lock_guard<std::mutex> lock(mtx);
      Common::moveCursorTo(0, 6);
      std::cout << "Enter a letter (q=play, w=sleep, e=eat; x=exit): ";
      std::cout.flush();
      
      Common::moveCursorTo(0, 7);
    }

    std::cin >> input;
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');

      continue;
    }

    input = std::tolower(input);
    if (!std::isalpha(input)) {
      continue;
    }

    if (input == 'x') {
      qrumpir.stop();
      {
        std::lock_guard<std::mutex> lock(mtx);
        Common::moveCursorTo(0, 8);
        std::cout << "Exiting game...\n\n";
      }
      break;
    }

    switch (input) {
      case 'q': qrumpir.setState(Play::getInstance()); break;
      case 'w': qrumpir.setState(Sleep::getInstance()); break;
      case 'e': qrumpir.setState(Eat::getInstance()); break;
      default: qrumpir.setState(CatIdle::getInstance()); break;
    }
  }
}