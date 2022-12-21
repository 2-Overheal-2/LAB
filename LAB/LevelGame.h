#pragma once
#include "Level.h"
#include "MessageGame.h"
class LevelGame: public Level
{
public:
	LevelGame();
	Message* update() override;
};

