#include "PowerUpEvent.h"

void PowerUpEvent::do_event()
{
	player_->set_powerup();
}

PowerUpEvent::PowerUpEvent(Player* player) : player_(player) {}