#pragma once
#include "Field.h"
#include "SpaceEvent.h"
class FieldEvent{
private:
	Field* _field = nullptr;
public:
	FieldEvent(Field*);
	Event* createEvent();
};