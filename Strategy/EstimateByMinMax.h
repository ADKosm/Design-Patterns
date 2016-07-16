//
// Created by alex on 16.07.16.
//

#ifndef STRATEGY_ESTIMATEBYMINMAX_H
#define STRATEGY_ESTIMATEBYMINMAX_H

#include "EstimateStrategy.h"

class EstimateByMinMax : public EstimateStrategy {
public:
    EstimateByMinMax();
    ~EstimateByMinMax();

    float run(std::vector<float>::iterator begin, std::vector<float>::iterator end);
};


#endif //STRATEGY_ESTIMATEBYMINMAX_H
