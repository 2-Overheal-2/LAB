#pragma once
#include <vector>
class Cell
{
	int condition;
public:
	enum cellType { WALL = 0, SPACE, HEAL, ENEMY, POWERUP };
	Cell();
	Cell(int);
	~Cell();
	Cell(const Cell&);
	Cell& operator =(const Cell&);
	void playerContact();
	int getType();
	void set_wall();
	void set_enemy();
	void set_heal();
	void set_powerup();
	void changeType();
	void set_state(int);
};