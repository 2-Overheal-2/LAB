#pragma once
#include <iostream>
#include <ctype.h>
#include "LevelContext.h"
#include "EasyLevel.h"
#include "HardLevel.h"
#include <Windows.h>
class InputLevelGame {
public:
	int get_level_game(LevelContext* context);
};