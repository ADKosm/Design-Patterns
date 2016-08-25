//
// Created by alex on 25.08.16.
//

#include "Timer.h"
#include <unistd.h>
#include <time.h>

Timer::~Timer() {

}

Timer::Timer() : Subject() {

}


void Timer::Start(int sec) {
    for(;;) {
        Notify();
        sleep(sec);
    }
}

std::string Timer::GetCurrentTime() {
    time_t rawtime;
    struct tm * timeinfo;

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    return std::string(asctime(timeinfo));
}

