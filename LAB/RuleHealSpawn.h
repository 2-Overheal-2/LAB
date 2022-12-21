#pragma once
#include "Field.h"
#include <conio.h>
#include <vector>
template <int size>
class RuleHealSpawn
{
        std::vector<std::vector<char>> heal{
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ','X',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ','X',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ','X',' '},
		{' ',' ',' ',' ',' ',' ',' ',' ',' '},
	};
public:
	void establish(Field* field);
};

template <int size>
void RuleHealSpawn<size>::establish(Field* field)
{
	if (size == heal.size()) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (heal[i][j] == 'X') {
					if (field->matrix()[i][j]->getType() != SPACE) {
						system("cls");
						printf("[ERROR] Inappropriate keys generation");
						_getch();
						return;
					}
					field->matrix()[i][j]->set_heal();
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