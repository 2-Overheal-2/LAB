#pragma once
#include "Commands.h"
class CommandWin : public Commands {
public:
    using Commands::Commands;
    std::string do_something() override;
};
