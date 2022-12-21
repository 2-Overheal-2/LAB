#pragma once
#include "iostream"
#include "ObserverLevel.h"
#include "Message.h"
#include "Commands.h"
class Level : public ObserverLevel {
public:
    Commands* get_command();
    virtual Message* update() = 0;
    void set_command(Commands* key);
    std::string get_level();
protected:
    Commands* key;
    std::string level;
    bool is_update;
};
