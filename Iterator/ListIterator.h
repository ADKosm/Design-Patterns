//
// Created by alex on 28.07.16.
//

#ifndef ITERATOR_LISTITERATOR_H
#define ITERATOR_LISTITERATOR_H

#include "List.h"

class ListIterator {
public:
    ListIterator(List * list);
    ~ListIterator();

    void First();
    void Next();
    bool IsDone();
    int Current();

    void SetList(List * l);

private:
    List * first;
    List * current;
};


#endif //ITERATOR_LISTITERATOR_H
