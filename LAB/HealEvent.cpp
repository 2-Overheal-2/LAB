#include "HealEvent.h"
void HealEvent::do_event()
{
	if (player_->get_health() < 10)
		player_->healing();
}

HealEvent::HealEvent(Player* player) : player_(player) {}
