//
// Created by alex on 28.07.16.
//

#ifndef ITERATOR_LIST_H
#define ITERATOR_LIST_H

class ListIterator;

class List {
friend class ListIterator;
public:
    List();
    List(int v);
    ~List();

    int GetVal();
    void SetVal(int v);

    List * Add(int v);



private:
    int value;
    List * next;

};


#endif //ITERATOR_LIST_H
