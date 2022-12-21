#pragma once
#include "Event.h"
#include "WinEvent.h"
#include "LoseEvent.h"

class GameEvent
{
public:
	Event* createEvent();
	Event* createSecEvent();
};