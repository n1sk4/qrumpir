#include "game.hpp"

Game::Game() {
  init();
}

void Game::init() {
  char input;
  Qrumpir qrumpir;
  while (true) {
    std::cout << "Enter a letter (q=play, w=sleep, e=eat; x=exit):";
    std::cin >> input;

    input = std::tolower(input);
    if(!std::isalpha(input)) {
      std::cout << "Invalid input. Please enter a letter\n";
      continue;
    }

    if(input == 'x') {
      std::cout << "Exiting game..." << std::endl;
      break;
    }

    processInput(input, qrumpir);
  }
}

void Game::processInput(char input, Qrumpir& qrumpir) {
  switch (input) {
    case 'q':
    {
      qrumpir.setState(Play::getInstance());
      break;
    }
    case 'w':
    {
      qrumpir.setState(Sleep::getInstance());
      break;
    }
    case 'e':
    {
      qrumpir.setState(Eat::getInstance());
      break;
    }
    default:
    {
      std::cout << "Unknown input!\n";
      return;
    }
  }

  qrumpir.setState(Idle::getInstance());
}