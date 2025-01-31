#pragma once

#include "qrumpir_state.hpp"
#include "qrumpir.hpp"
#include <iostream>

// Eating state
class QrumpirEat : public QrumpirState {
public:
  void enter(Qrumpir* qrumpir) { std::cout << "Enter eating"; };
  void exit(Qrumpir* qrumpir) {};
  static QrumpirState& getInstance();

private:
  QrumpirEat() {};
  QrumpirEat& operator=(const QrumpirEat& other);
};

// Sleeping state
class QrumpirSleep : public QrumpirState {
public:
  void enter(Qrumpir* qrumpir) { std::cout << "Enter sleeping"; };
  void exit(Qrumpir* qrumpir) {};
  static QrumpirState& getInstance();

private:
  QrumpirSleep() {};
  QrumpirSleep& operator=(const QrumpirSleep& other);
};

// Playing state
class QrumpirPlay : public QrumpirState {
public:
  void enter(Qrumpir* qrumpir) { std::cout << "Enter playing"; };
  void exit(Qrumpir* qrumpir) {};
  static QrumpirState& getInstance();

private:
  QrumpirPlay() {};
  QrumpirPlay& operator=(const QrumpirPlay& other);
};