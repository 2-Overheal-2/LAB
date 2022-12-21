#pragma once
#include "Message.h"
#include "Commands.h"
class ObserverLevel {
public:
    virtual Message* update() = 0;
    virtual Commands* get_command() = 0;
    virtual void set_command(Commands* val) = 0;
    virtual std::string get_level() = 0;
};