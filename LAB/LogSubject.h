#pragma once
#include "LogObserver.h"
#include "Message.h"
class LogSubject
{
public:
    virtual void attach(LogObserver* observer) = 0;
    virtual void detach(LogObserver* observer) = 0;
    virtual void notify(Message* message, int key) = 0;
};