#pragma once
#include "Commands.h"
class CommandNoMove : public Commands {
public:
    using Commands::Commands;
    std::string do_something() override;
};
