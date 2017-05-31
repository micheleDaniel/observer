//
// Created by studente on 25/05/16.
//

#include "GameCharacter.h"

GameCharacter::GameCharacter() : posX(0), posY(0), hp(10) {
    // ... more code ...
}

GameCharacter::~GameCharacter() {
    // ... more code ...
}

void GameCharacter::move(int x, int y) {
    posX += x;
    posY += y;
    notify();
}

void GameCharacter::heal(int health) {
    hp += health;
}

void GameCharacter::subscribe(Observer *o) {
    observers.push_back(o);
}

void GameCharacter::unsubscribe(Observer *o) {
    observers.remove(o);
}

void GameCharacter::notify() {
    for( auto itr = std::begin(observers); itr != std::end(observers); itr++) {
        (*itr)->update(posX, posY);
    }
}
