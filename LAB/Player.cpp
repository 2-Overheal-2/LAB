#include "Player.h"

Player::Player() :health(5), powerup(false), lvl(1)
{
}

Player::~Player()
{
}

Player::Player(const Player& obj)
{
	this->health = obj.health;
	this->powerup = obj.powerup;
	this->lvl = obj.lvl;
}

Player& Player::operator=(const Player& obj)
{
	this->health = obj.health;
	this->powerup = obj.powerup;
	this->lvl = obj.lvl;
	return *this;
}


void Player::set_health(int h) {
	health = h;
}
void Player::set_powerup() {
	powerup = true;
}
void Player::set_powerup_false() {
	powerup = false;
}
void Player::set_lvl(int h) {
	lvl = h;
}

void Player::healing() {
	health++;
}
void Player::damage() {
	health--;
}
int Player::get_health() {
	return health;
}
int Player::get_powerup() {
	return powerup;
}
int Player::get_lvl() {
	return lvl;
}

void Player::set_pow(int state) {
	powerup = state;
}