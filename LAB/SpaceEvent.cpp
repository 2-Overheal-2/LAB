#include "SpaceEvent.h"
SpaceEvent::SpaceEvent(Field* field) : field_(field) {}
void SpaceEvent::do_event()
{
	int PlayerX = field_->currentPlayerX();
	int PlayerY = field_->currentPlayerY();
	Cell* playerCell = field_->matrix().at(PlayerY).at(PlayerX);
	if (playerCell->getType() == HEAL)
		playerCell->changeType();
}