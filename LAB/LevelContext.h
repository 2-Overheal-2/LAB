#pragma once
#include "LevelStrategy.h"
#include "Field.h"

class LevelContext
{
	LevelStrategy* strategy;
public:
	LevelContext(LevelStrategy*);
	~LevelContext();
	void setStrategy(LevelStrategy*);
	Field* createLevel();
};