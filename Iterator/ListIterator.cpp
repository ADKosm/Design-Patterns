//
// Created by alex on 28.07.16.
//

#include "ListIterator.h"

ListIterator::ListIterator(List *list) : first(list) {
}

ListIterator::~ListIterator() {
}

void ListIterator::First() {
    current = first;
}

void ListIterator::Next() {
    current = current->next;
}


void ListIterator::SetList(List *l) {
    first = l;
}


bool ListIterator::IsDone() {
    return (current == nullptr);
}

int ListIterator::Current() {
    return current->GetVal();
}

