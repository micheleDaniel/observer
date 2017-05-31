//
// Created by studente on 25/05/16.
//

#ifndef OBSERVER_2_GAMECHARACTER_H
#define OBSERVER_2_GAMECHARACTER_H

#include "Subject.h"
#include <list>

class GameCharacter : public Subject {
public:
    GameCharacter();
    virtual ~GameCharacter();

    void move(int x, int y);
    void heal(int health);

    virtual void subscribe(Observer* o) override;
    virtual void unsubscribe(Observer* o) override;
    virtual void notify() override;

private:
    int posX, posY, hp;
    std::list<Observer*> observers;
};


#endif //OBSERVER_2_GAMECHARACTER_H
