#pragma once

#include <iostream>

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

namespace Common {

inline void moveCursorTo(int x, int y) {
#ifdef _WIN32
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
  SetConsoleCursorPosition(hConsole, pos);
#else
  std::cout << "\033[" << y << ";" << x << "H";
#endif
}

inline void clearLine() {
#ifdef _WIN32
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(hConsole, &csbi);
  DWORD length = csbi.dwSize.X;
  DWORD written;
  COORD pos = csbi.dwCursorPosition;
  FillConsoleOutputCharacter(hConsole, ' ', length, pos, &written);
  FillConsoleOutputAttribute(hConsole, csbi.wAttributes, length, pos, &written);
  SetConsoleCursorPosition(hConsole, pos);
#else
  std::cout << "\033[K";
#endif
}

inline void clearScreen() {
#ifdef _WIN32
  system("cls");
#else
  std::cout << "\033[2J\033[H";
#endif
}


} // Common namespace