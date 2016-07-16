//
// Created by alex on 16.07.16.
//

#ifndef STRATEGY_ESTIMATESTRATEGY_H
#define STRATEGY_ESTIMATESTRATEGY_H

#include <vector>

class EstimateStrategy {
public:
    virtual ~EstimateStrategy() {};

    virtual float run(std::vector<float>::iterator begin, std::vector<float>::iterator end) = 0;

protected:
    EstimateStrategy(){};
};


#endif //STRATEGY_ESTIMATESTRATEGY_H
