#pragma once
#include "Field.h"
#include <conio.h>
template <int size>
class RuleEnemiesSpawn
{
	std::vector<std::vector<char>> enemies = {
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ','X',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
	};
public:
	void establish(Field*);
};

template<int size>
void RuleEnemiesSpawn<size>::establish(Field* field)
{
	if (size == enemies.size()) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++)
				if (enemies[j][i] == 'X') {
					if (field->matrix()[i][j]->getType() != SPACE) {
						system("cls");
						printf("[ERROR] Inappropriate generation of enemies");
						_getch();
						return;
					}
					field->matrix()[i][j]->set_enemy();
				}

		}
	}
	else {
		system("cls");
		printf("[ERROR] Inappropriate generation of enemies");
		_getch();
		delete field;
	}

}