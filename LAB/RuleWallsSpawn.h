#pragma once
#include "Field.h"
#include <conio.h>
template <int size>
class RuleWallsSpawn {
	std::vector<std::vector<char>> walls = {
		{'X',' ','X','X',' ','X','X',' ','X'},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{'X',' ','X',' ','X',' ','X',' ','X'},
		{'X',' ','X',' ','X',' ',' ',' ','X'},
		{' ',' ','X',' ','X','X','X',' ',' '},
		{'X',' ','X',' ',' ',' ',' ',' ','X'},
		{'X',' ','X','X','X','X','X',' ','X'},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{'X',' ','X','X',' ','X','X',' ','X'},
	};
public:
    void establish(Field* main_field);
};

template<int size>
void RuleWallsSpawn<size>::establish(Field* field) {
	if (size == walls.size()) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (walls[i][j] == 'X') {
					if (field->matrix()[i][j]->getType() != SPACE) {
						system("cls");
						//printf("%d %d", i, j);
						printf("[ERROR] Inappropriate walls generation");
						_getch();
						return;
					}
					field->matrix()[i][j]->set_wall();
				}
			}

		}
	}
	else {
	system("cls");
	printf("[ERROR] Inappropriate heal generation");
	_getch();
	}
}