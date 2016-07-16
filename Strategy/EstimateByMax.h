//
// Created by alex on 16.07.16.
//

#ifndef STRATEGY_ESTIMATEBYMAX_H
#define STRATEGY_ESTIMATEBYMAX_H

#include "EstimateStrategy.h"

class EstimateByMax : public EstimateStrategy {
public:
    EstimateByMax();
    ~EstimateByMax();

    float run(std::vector<float>::iterator begin, std::vector<float>::iterator end);
};


#endif //STRATEGY_ESTIMATEBYMAX_H
