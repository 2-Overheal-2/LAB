#pragma once
#include "Field.h"
class LevelStrategy
{
public:
	virtual Field* generateLevel() = 0;
};