#pragma once
#include "LevelStrategy.h"
#include "RulePlayerSpawn.h"
#include "LevelGenerator.h"
#include "RuleWallsSpawn.h"
#include "RuleHealSpawn.h"
#include "RulePowerUpCellSpawn.h"
#include "RuleFieldSize.h"

class EasyLevel : public LevelStrategy
{
	LevelGenerator <
		RuleFieldSize<9>,
		RulePowerUpCellSpawn<8,8>, 
		RulePlayerSpawn<1, 7>, 
		RuleHealSpawn<9>, 
		RuleWallsSpawn<9>
	> levelGenerator;
public:
	Field* generateLevel() override;
};