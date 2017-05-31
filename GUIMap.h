//
// Created by studente on 25/05/16.
//

#ifndef OBSERVER_2_GUIMAP_H
#define OBSERVER_2_GUIMAP_H

#include "Observer.h"
#include "Display.h"
#include "GameCharacter.h"
#include <iostream>

class GUIMap : public Observer, public Display {
public:
    GUIMap(GameCharacter* gc);
    virtual ~GUIMap();

    virtual void draw() override;

    virtual void update(int x, int y) override;
    virtual void attach() override;
    virtual void detach() override;

private:
    int x, y;
    GameCharacter* subject;
};


#endif //OBSERVER_2_GUIMAP_H
