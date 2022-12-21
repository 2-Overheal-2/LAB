#pragma once
#include "Commands.h"
class CommandLose : public Commands {
public:
    using Commands::Commands;
    std::string do_something() override;
};