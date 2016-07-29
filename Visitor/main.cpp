#include <iostream>

#include "CharElement.h"
#include "NumberElement.h"
#include "LetterStatisticVisitor.h"
#include "MeanVisitor.h"

#include <vector>

int main() {
    std::vector<Element *> data {
            new CharElement('a'),
            new CharElement('e'),
            new NumberElement(4),
            new NumberElement(3),
            new CharElement('s'),
            new CharElement('e'),
            new CharElement('r'),
            new CharElement('e'),
            new NumberElement(5),
            new NumberElement(9),
            new CharElement('r'),
            new NumberElement(1)
    };

    LetterStatisticVisitor * lsv = new LetterStatisticVisitor();
    MeanVisitor * mv = new MeanVisitor();

    for(size_t i = 0; i < data.size(); i++) {
        data[i]->Accept(mv);
        data[i]->Accept(lsv);
    }

    std::cout << "Mean: " << mv->GetResult() << std::endl;
    std::cout << "Statistic: " << std::endl << lsv->GetResult() << std::endl;
    return 0;
}