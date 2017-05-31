//
// Created by studente on 25/05/16.
//

#ifndef OBSERVER_2_MINIGUIMAP_H
#define OBSERVER_2_MINIGUIMAP_H

#include "Observer.h"
#include "Display.h"
#include <iostream>
#include "GameCharacter.h"

class MiniGUIMap : public Observer, public Display {
public:
    MiniGUIMap(GameCharacter* gc);
    virtual ~MiniGUIMap();

    virtual void draw() override;

    virtual void update(int x, int y) override;
    virtual void attach() override;
    virtual void detach() override;

    void setVisible(bool v);

private:
    int x, y;
    bool visible;
    GameCharacter* subject;
};


#endif //OBSERVER_2_MINIGUIMAP_H
