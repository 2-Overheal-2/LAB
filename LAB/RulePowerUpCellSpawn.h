#pragma once
#include "Field.h"

template <int x, int y>
class RulePowerUpCellSpawn {
public:
    void establish(Field* main_field);
};

template<int x, int y>
void RulePowerUpCellSpawn<x, y>::establish(Field* field) {
    for (int i = 0; i < field->get_size(); i++) {
        for (int j = 0; j < field->get_size(); j++) {
            if (i == y && j == x) {
                if (field->matrix()[i][j]->getType() == SPACE) {
                    (field->matrix())[i][j]->set_powerup();
                }
            }

        }

    }
    

}