#pragma once
#include "LevelStrategy.h"
#include "RulePlayerSpawn.h"
#include "LevelGenerator.h"
#include "RuleWallsSpawn.h"
#include "RuleHealSpawn.h"
#include "RulePowerUpCellSpawn.h"
#include "RuleFieldSize.h"
#include "RuleEnemiesSpawn.h"

class HardLevel : public LevelStrategy
{
	LevelGenerator <
		RuleFieldSize<9>,
		RulePowerUpCellSpawn<7, 8>,
		RulePlayerSpawn<1, 2>,
		RuleHealSpawn<9>,
		RuleWallsSpawn<9>,
		RuleEnemiesSpawn<9>
	> levelGenerator;
public:
	Field* generateLevel() override;
};