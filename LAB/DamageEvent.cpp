#include "DamageEvent.h"

void DamageEvent::do_event()
{
	player_->damage();
}

DamageEvent::DamageEvent(Player* player) : player_(player) {}
