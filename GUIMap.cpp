//
// Created by studente on 25/05/16.
//

#include "GUIMap.h"

GUIMap::GUIMap(GameCharacter *gc) : subject(gc) {
    // ... more code ...
    attach();
}

GUIMap::~GUIMap() {
    detach();
}

void GUIMap::draw() {
    std::cout << "GUIMap - x: " << x << " - y: " << y << std::endl;
}

void GUIMap::update(int x, int y) {
    this->x = x;
    this->y = y;
    draw();
}

void GUIMap::attach() {
    subject->subscribe( this );
}

void GUIMap::detach() {
    subject->unsubscribe( this );
}
