#pragma once
#include "Event.h"
#include "Player.h"
class PowerUpEvent : public Event
{
	Player* player_;
public:
	void do_event() override;
	PowerUpEvent(Player*);
};


