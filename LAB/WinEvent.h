#pragma once
#include "Event.h"

class WinEvent : public Event
{
public:
	void do_event() override;
};