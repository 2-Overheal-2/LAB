#pragma once
#include "string"
class Message {
public:
    virtual std::string get_message() = 0;
};
