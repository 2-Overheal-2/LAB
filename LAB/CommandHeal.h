#pragma once
#include "Commands.h"
class CommandHeal : public Commands {
public:
    using Commands::Commands;
    std::string do_something() override;
};