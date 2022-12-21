#pragma once
#include "Level.h"
#include "MessageWarning.h"
class LevelWarning : public Level {
public:
	LevelWarning();
	Message* update() override;
};