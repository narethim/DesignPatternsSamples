#pragma once
#include "Product.h"

/**
 * Concrete Products provide various implementations of the Product interface.
 */
class ConcreteProduct2 :
    public Product
{
public:
    std::string Operation() const override {
        return "{Result of the ConcreteProduct2}";
    }
};

