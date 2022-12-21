#pragma once
#include "Input.h"
#include "Player.h"
#include "Field.h"
#include "ISubject.h"
#include "CommandNoMove.h"
#include "SaveData.h"
#include "LoadData.h"
class MotionLogic
{
public:
	enum eDirection {UP, LEFT, DOWN, RIGHT, SAVE, LOAD};
	void start(int, Field&, ISubject* isubject, Player* player);
};