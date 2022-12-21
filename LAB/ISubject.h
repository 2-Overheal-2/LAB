#pragma once
#include "ObserverLevel.h"
#include "Logger.h"
class ISubject {
public:
	virtual void notify() = 0;
	virtual void prefex(std::string prefex,Commands* commands) = 0;
};