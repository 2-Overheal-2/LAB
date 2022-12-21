#pragma once
#include "Player.h"
#include "Field.h"
#include <cmath>

template <int x, int y>
class RulePlayerSpawn {
public:
    void establish(Field* main_field);
};
template <int x, int y>
void RulePlayerSpawn <x, y>::establish(Field* field) {
    Player* player = new Player;
    player->set_health(5);
    player->set_lvl(1);
    player->set_powerup_false();
    if (x < field->get_size() && y < field->get_size() && x >= 0 && y >= 0) {
        field->movePlayerX(x);
        field->movePlayerY(y);
    }
    else {
        printf("Inappropriate hero spawn generation");
    }
  
}