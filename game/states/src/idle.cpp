#include "idle.hpp"

void Idle::run(Qrumpir* qrumpir) {
}

void Idle::enter(Qrumpir* qrumpir) {
}

void Idle::exit(Qrumpir* qrumpir) {
}

State& Idle::getInstance() {
    static Idle singleton;
    return singleton;
}