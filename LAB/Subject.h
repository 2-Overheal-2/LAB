#pragma once
#include <vector>
#include "ISubject.h"
//#include "MessageGame.h"
#include "ObserverLevel.h"
//#include "Logger.h"
class Subject: public ISubject
{
public:
	Subject(std::vector<ObserverLevel *>lvl, std::vector<Logger *>lg);
	void notify() override;
	void prefex(std::string prefex,Commands *commands) override;
private:
	std::vector<ObserverLevel *>level;
	std::vector<Logger *>log;
};