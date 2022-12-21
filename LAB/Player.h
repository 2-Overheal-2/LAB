#pragma once
#include <iostream>

class Player {
private:
	int health;
	bool powerup;
	int lvl;
public:
	Player();
	~Player();
	Player(const Player&);
	Player& operator=(const Player&);
	void set_health(int h);
	void set_powerup();
	void set_lvl(int h);
	void healing();
	void damage();
	int get_health();
	int get_powerup();
	int get_lvl();
	void set_powerup_false();
	void set_pow(int);
};