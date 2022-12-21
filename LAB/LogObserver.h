#pragma once
class LogObserver
{
public:
    virtual void update(const char* message) = 0;
};
