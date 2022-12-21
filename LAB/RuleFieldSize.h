#pragma once
#include "Field.h"
#include <conio.h>
template <int size>
class RuleFieldSize{
public:

	void establish(Field* field);
};

template<int size>
void RuleFieldSize<size>::establish(Field* field)
{
	if (size)
		field->set_size(size);
	else {
		system("cls");
		printf("[ERROR] Inappropriate field size generation");
		_getch();
	}
}
