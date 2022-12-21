#pragma once
#include "Event.h"
#include "Player.h"
#include "PowerUpEvent.h"
#include "DamageEvent.h"
#include "HealEvent.h"
class PlayerEvent
{
	Player* _player = nullptr;
public:
	Event* createEvent();
	Event* createSecEvent();
	Event* createThirdEvent();
	PlayerEvent(Player*);
};
