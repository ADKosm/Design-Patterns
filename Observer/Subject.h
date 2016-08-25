//
// Created by alex on 25.08.16.
//

#ifndef OBSERVER_SUBJECT_H
#define OBSERVER_SUBJECT_H

#include <set>

class Observer;

class Subject {
public:
    virtual ~Subject();

    virtual void Attach(Observer * ob);
    virtual void Detach(Observer * ob);
    virtual void Notify();

protected:
    Subject();

private:
    std::set<Observer *> observers;
};


#endif //OBSERVER_SUBJECT_H
