//
// Created by studente on 25/05/16.
//

#ifndef OBSERVER_2_SUBJECT_H
#define OBSERVER_2_SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual void subscribe(Observer* o) = 0;
    virtual void unsubscribe(Observer* o) = 0;
    virtual void notify() = 0;
};

#endif //OBSERVER_2_SUBJECT_H
