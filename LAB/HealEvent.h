#pragma once
#include "Event.h"
#include "Player.h"
class HealEvent : public Event
{
	Player* player_ = nullptr;
public:
	void do_event() override;
	HealEvent(Player*);
};