#pragma once
#include <list>
#include "Player.h"
#include "Field.h"
#include "PlayerEvent.h"
#include "Subject.h"
#include "GameEvent.h"
#include "FieldEvent.h"
#include "CommandWin.h"
#include "CommandLose.h"
#include "CommandDamage.h"
#include "CommandHeal.h"
class GameLogic
{		
public:
	void start(Field&, Player&,int &gameover,ISubject *i);

};
