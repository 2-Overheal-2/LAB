#include "Cell.h"

Cell::Cell() : condition(SPACE) {}
Cell::Cell(int type) :condition(type){}
Cell:: ~Cell() {}

Cell::Cell(const Cell& obj)
{
    this->condition = obj.condition;
}
Cell& Cell::operator=(const Cell& obj)
{
    this->condition = obj.condition;
    return *this;
}

//void Cell::playerContact() {
//	if (condition == HEAL) {
//	//	heal.do_event();
//	}
//}

int Cell::getType() {
	return condition;
}

void Cell::changeType() {
	condition = SPACE;
}

void Cell::set_wall() {
    condition = WALL;
}

void Cell::set_enemy() {
    condition = ENEMY;
}

void Cell::set_heal() {
    condition = HEAL;
}

void Cell::set_powerup() {
    condition = POWERUP;
}
void Cell::set_state(int state) {
    condition = state;
}