#include "CellView.h"

void CellView::cellDraw(Cell& cell)
{
	switch (cell.getType()) {
	case WALL:
		printf("%c", 'X');
		break;
	case SPACE:
		printf("%c", ' ');
		break;
	case HEAL:
		printf("%c", 'o');
		break;
	case ENEMY:
		printf("%c", '+');
		break;
	case POWERUP:
		printf("%c", 'P');
		break;
	default:
		printf("%c", 'A');
		break;
	}


}