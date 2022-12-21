#pragma once
#include "iostream"
class Commands {
public:
    Commands() = default;
    virtual std::string do_something() = 0;
};
