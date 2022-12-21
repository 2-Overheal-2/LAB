#include "FieldView.h"

void FieldView::DrawField(Field* field, Player* player) {
	Sleep(300);
	system("cls");
	int size = field->get_size();
	for (int i = 0; i < size + 2; i++)
		printf("%c", '#');
	printf("%c", '\n');

	for (int i = 0; i < size; i++) {
		printf("%c", '#');
		for (int j = 0; j < size; j++) {
			if (i == field->currentPlayerY() && j == field->currentPlayerX()) {
				printf("%c", '0');
			}
			else
			{
				cellView.cellDraw(*(field->matrix().at(i).at(j)));
			}
		}
		printf("%c", '#');
		printf("%c", '\n');
	}

	for (int i = 0; i < size + 2; i++)
		printf("%c", '#');
	printf("%c", '\n');
	printf("%s %d %c", "Health:", player->get_health(), '\n');
}