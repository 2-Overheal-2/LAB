#pragma once
#include "Level.h"
#include "MessageInfo.h"
class LevelInfo : public Level
{
public:
	LevelInfo();
	Message* update() override;
};

