#include "FieldCheck.h"


bool FieldCheck::check(Field* field)
{
    if (field->currentPlayerX() > field->get_size() || field->currentPlayerY() > field->get_size() || (field->matrix()[field->currentPlayerY()][field->currentPlayerX()])->getType() != SPACE) {
        system("cls");
        printf("[ERROR] Impossible level generation process");
        _getch();
        return false;
    }
    return true;

}