#pragma once
#include "iostream"
#include "vector"
#include "LevelWarning.h"
#include "LevelGame.h"
#include "LevelInfo.h"
#include "LoggerFile.h"
#include "LoggerConsole.h"
class LogMenu {
public:
	void set_levels(std::vector<ObserverLevel*>* level);
	void set_loggers(std::vector<Logger*>& l);
	void set_level(std::string s, std::vector<ObserverLevel*>* level);
private:
//	void set_level(std::string s, std::vector<ObserverLevel*>* level);
	
};