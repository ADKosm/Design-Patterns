#include <iostream>

#include "List.h"
#include "ListIterator.h"

int main() {
    List * l = new List(2);
    l->Add(3)->Add(3)->Add(7)->Add(4)->Add(3)->Add(9)->Add(6)->Add(7)->Add(5);

    double result = 0;
    int count = 0;
    ListIterator * i = new ListIterator(l);
    for(i->First(); !i->IsDone(); i->Next()) {
        result += i->Current();
        count++;
    }
    delete i;
    result /= count;

    std::cout << "Mean of this sequence equals to " << result << std::endl;
    return 0;
}