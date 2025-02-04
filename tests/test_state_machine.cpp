#include "qrumpir.hpp"

#include "idle.hpp"
#include "eat.hpp"
#include "sleep.hpp"
#include "play.hpp"

#include <gtest/gtest.h>

TEST(ConcreteStateTest, InitialStateIsSleep) {
  Qrumpir qrumpir;
  EXPECT_FALSE(dynamic_cast<State*>(qrumpir.getCurrentState()) == &Sleep::getInstance());
}

TEST(ConcreteStateTest, TranisitionToEat) {
  Qrumpir qrumpir;
  qrumpir.setState(Eat::getInstance());
  EXPECT_TRUE(dynamic_cast<State*>(qrumpir.getCurrentState()) == &Eat::getInstance());
}

TEST(ConcreteStateTest, TranisitionToPlay) {
  Qrumpir qrumpir;
  qrumpir.setState(Play::getInstance());
  EXPECT_TRUE(dynamic_cast<State*>(qrumpir.getCurrentState()) == &Play::getInstance());
}
