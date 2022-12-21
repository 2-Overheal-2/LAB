#pragma once
#include <Windows.h>
#include "Menu.h"
#include "Input.h"
#include "MotionLogic.h"
#include "GameLogic.h"
#include "Field.h"
#include "FieldView.h"
#include "Logger.h"
#include "Subject.h"
#include "LevelGame.h"
#include "LevelInfo.h"
#include "LevelWarning.h"
#include "LoggerConsole.h"
#include "LoggerFile.h"
#include "LogMenu.h"
#include "CommandGameStart.h"
#include "InputLevelGame.h"
#include "LevelContext.h"
#include "FieldCheck.h"

class Game
{
public:
	void run();
};
