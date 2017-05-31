//
// Created by studente on 25/05/16.
//

#ifndef OBSERVER_2_OBSERVER_H
#define OBSERVER_2_OBSERVER_H

class Observer {
public:
    virtual ~Observer() {}

    virtual void update(int x, int y) = 0;

    virtual void attach() = 0;
    virtual void detach() = 0;
};

#endif //OBSERVER_2_OBSERVER_H
