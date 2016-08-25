//
// Created by alex on 25.08.16.
//

#ifndef OBSERVER_LINE_H
#define OBSERVER_LINE_H

#include "Observer.h"
#include "Timer.h"

class Line : public Observer{

public:
    virtual ~Line() override;

    virtual void Update(Subject *updatedObject) override;

    Line(Timer *t);

    void Draw();

private:

    Timer * tim;
    int len;
};


#endif //OBSERVER_LINE_H
