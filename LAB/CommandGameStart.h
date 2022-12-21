#pragma once
#include "Commands.h"
class CommandGameStart : public Commands {
public:
    using Commands::Commands;
    std::string do_something() override;
};
