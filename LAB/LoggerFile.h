#pragma once
#include "Logger.h"
#include <iostream>
#include <fstream>
class LoggerFile : public Logger {
public:

    explicit LoggerFile(Message* m1);

    void print() override;
    ~LoggerFile() override;
private:
    std::fstream out;
};
