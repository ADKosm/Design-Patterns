//
// Created by alex on 16.07.16.
//

#ifndef STRATEGY_ESTIMATEBYMEAN_H
#define STRATEGY_ESTIMATEBYMEAN_H

#include "EstimateStrategy.h"

class EstimateByMean : public EstimateStrategy {
public:
    EstimateByMean();
    ~EstimateByMean();

    float run(std::vector<float>::iterator begin, std::vector<float>::iterator end);
};


#endif //STRATEGY_ESTIMATEBYMEAN_H
