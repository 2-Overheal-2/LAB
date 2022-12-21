#pragma once
#include "Commands.h"
class CommandConstructor : public Commands {
public:
    using Commands::Commands;
    std::string do_something() override;
};
