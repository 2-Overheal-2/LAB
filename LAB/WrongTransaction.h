#pragma once
#include "Field.h"
#include "Player.h"
class WrongTransaction {
public:
    explicit WrongTransaction(Field map,Player p);
    Field rollback_field();
    Player rollback_player();
    void set_roll(Field map,Player p);
private:
    Field field;
    Player player;
};