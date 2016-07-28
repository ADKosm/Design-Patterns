//
// Created by alex on 28.07.16.
//

#include "List.h"

List::List() : value(0), next(nullptr) {
}

List::List(int v) : value(v), next(nullptr) {
}


List::~List() {
    delete next;
}

int List::GetVal() {
    return value;
}

void List::SetVal(int v) {
    value = v;
}

List *List::Add(int v) {
    if(next) {
        next->Add(v);
    } else {
        next = new List(v);
    }
    return next;
}


