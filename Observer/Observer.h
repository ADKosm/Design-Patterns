//
// Created by alex on 25.08.16.
//

#ifndef OBSERVER_OBSERVER_H
#define OBSERVER_OBSERVER_H

class Subject;

class Observer {
public:
    virtual ~Observer();

    virtual void Update(Subject * updatedObject) = 0;

protected:
    Observer();
};


#endif //OBSERVER_OBSERVER_H
