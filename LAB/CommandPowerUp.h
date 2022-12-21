#pragma once
#include "Commands.h"
class CommandPowerUp : public Commands {
public:
    using Commands::Commands;
    std::string do_something() override;
};