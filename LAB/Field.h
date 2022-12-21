#pragma once
#include <vector>
#include "Cell.h"
enum cellType { WALL = 0, SPACE, HEAL, ENEMY, POWERUP};
class Field
{
	Cell cell;
	int size;
	int playerX;
	int playerY;
	std::vector<std::vector<Cell*>> mat;

public:
	cellType condition;
	Field();
	~Field();
	Field(const Field&); 
	Field& operator =(const Field&);
	Field(Field&&);
	Field& operator=(Field&& obj);
	int get_size();
	std::vector<std::vector<Cell*>> matrix();
	int currentPlayerX();
	int currentPlayerY();
	void movePlayerX(int);
	void movePlayerY(int);
	void set_size(int);
};