#pragma once
#include "Commands.h"
class CommandDamage : public Commands {
public:
    using Commands::Commands;
    std::string do_something() override;
};
