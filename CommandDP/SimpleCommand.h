#pragma once

#include <iostream>
#include <string>

#include "Command.h"

/**
 * Some commands can implement simple operations on their own.
 */
class SimpleCommand :
    public Command
{
private:
    std::string pay_load_;

public:
    explicit SimpleCommand(std::string pay_load) : pay_load_(pay_load) {
    }
    void Execute() const override {
        std::cout << "SimpleCommand: See, I can do simple things like printing (" << this->pay_load_ << ")\n";
    }
};

