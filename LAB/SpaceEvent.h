#pragma once
#include "Event.h"
#include "Field.h"
class SpaceEvent : public Event
{
	Field* field_ = nullptr;
public:
	void do_event() override;
	SpaceEvent(Field*);
};
