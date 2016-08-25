//
// Created by alex on 25.08.16.
//

#ifndef OBSERVER_CLOCKDISPLAY_H
#define OBSERVER_CLOCKDISPLAY_H

#include "Observer.h"
#include "Timer.h"

class ClockDisplay : public Observer {

public:
    virtual ~ClockDisplay() override;

    virtual void Update(Subject *updatedObject) override;

    ClockDisplay(Timer *t);

private:
    Timer * tim;
};


#endif //OBSERVER_CLOCKDISPLAY_H
