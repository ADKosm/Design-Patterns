//
// Created by alex on 25.08.16.
//

#ifndef OBSERVER_TIMER_H
#define OBSERVER_TIMER_H

#include <string>
#include "Subject.h"

class Timer : public Subject{
public:
    virtual ~Timer() override;
    Timer();

    void Start(int sec);
    std::string GetCurrentTime();
};


#endif //OBSERVER_TIMER_H
