//
// Created by studente on 25/05/16.
//

#include "MiniGUIMap.h"

MiniGUIMap::MiniGUIMap(GameCharacter* gc) : visible(true), subject(gc) {
    // ... code ...
    attach();
}

MiniGUIMap::~MiniGUIMap() {
    detach();
}

void MiniGUIMap::draw() {
    if (visible) {
        std::cout << "Mini map - x: " << x << " - y: " << y << std::endl;
    }
}

void MiniGUIMap::update(int x, int y) {
    this->x = x;
    this->y = y;
    draw();
}

void MiniGUIMap::attach() {
    subject->subscribe( this );
}

void MiniGUIMap::detach() {
    subject->unsubscribe( this );
}

void MiniGUIMap::setVisible(bool v) {
    visible = v;
    if (visible)
        attach();
    else
        detach();
}
