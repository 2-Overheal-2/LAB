#pragma once
#include "Event.h"
class LoseEvent : public Event
{
public:
	void do_event() override;
};

