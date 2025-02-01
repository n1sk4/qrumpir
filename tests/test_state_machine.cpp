#include "qrumpir.hpp"
#include <qrumpir_concrete_states.hpp>
#include <gtest/gtest.h>

TEST(ConcreteStateTest, InitialStateIsSleep) {
  Qrumpir qrumpir;
  EXPECT_TRUE(dynamic_cast<QrumpirState*>(qrumpir.getCurrentState()) == &QrumpirSleep::getInstance());
}

TEST(ConcreteStateTest, TranisitionToEat) {
  Qrumpir qrumpir;
  qrumpir.setState(QrumpirEat::getInstance());
  EXPECT_TRUE(dynamic_cast<QrumpirState*>(qrumpir.getCurrentState()) == &QrumpirEat::getInstance());
}

TEST(ConcreteStateTest, TranisitionToPlay) {
  Qrumpir qrumpir;
  qrumpir.setState(QrumpirPlay::getInstance());
  EXPECT_TRUE(dynamic_cast<QrumpirState*>(qrumpir.getCurrentState()) == &QrumpirPlay::getInstance());
}