#include "LevelContext.h"

LevelContext::LevelContext(LevelStrategy* strategy = nullptr) : strategy(strategy) {}

LevelContext::~LevelContext()
{
	delete this->strategy;
}

void LevelContext::setStrategy(LevelStrategy* strategy)
{
	delete this->strategy;
	this->strategy = strategy;
}

Field* LevelContext::createLevel()
{
	return this->strategy->generateLevel();
}