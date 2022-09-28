#pragma once
#include "Product.h"

/**
 * Concrete Products provide various implementations of the Product interface.
 */
class ConcreteProduct1 : public Product
{
public:
	std::string Operation() const override {
		return "{Result of the ConcreteProduct1}";
	}
};

