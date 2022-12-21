#include "WrongTransaction.h"
WrongTransaction::WrongTransaction(Field map,Player p) : field(map),player(p) {}

Field WrongTransaction::rollback_field() {
    return field;
}

Player WrongTransaction::rollback_player() {
    return player;
}

void WrongTransaction::set_roll(Field map, Player p) {
    field=map;
    player=p;
}