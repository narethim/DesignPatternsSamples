#pragma once

#include <string>
#include <string_view>
#include <algorithm>

#include "Strategy.h"

/**
 * Concrete Strategies implement the algorithm while following the base Strategy
 * interface. The interface makes them interchangeable in the Context.
 */

class ConcreteStrategyA :
    public Strategy
{
public:
    std::string doAlgorithm(std::string_view data) const override
    {
        std::string result(data);
        std::sort(std::begin(result), std::end(result));

        return result;
    }
};

