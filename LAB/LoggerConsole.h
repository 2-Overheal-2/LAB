#pragma once
#include "Logger.h"
class LoggerConsole : public Logger {
public:
    using Logger::Logger;
    void print() override;
    ~LoggerConsole() override = default;;
};