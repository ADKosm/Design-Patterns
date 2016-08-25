//
// Created by alex on 25.08.16.
//

#include "Subject.h"
#include "Observer.h"

Subject::~Subject() {

}

void Subject::Attach(Observer *ob) {
    observers.insert(ob);
}

void Subject::Detach(Observer *ob) {
    observers.erase(ob);
}

void Subject::Notify() {
    for(auto i = observers.begin(); i != observers.end(); i++) {
        (*i)->Update(this);
    }
}

Subject::Subject() {

}

