#pragma once
#include "Field.h"
#include <fstream>
#include <iostream>
#include <string>
#include "WrongReadFile.h"
#include "WrongData.h"
#include "Player.h"
class LoadData {
public:
    enum cellType { WALL = 0, SPACE, HEAL, ENEMY, POWERUP };
    LoadData(Field* map, Player* p);
    void load_characteristic(std::string path);
    void load_position(std::string path);
    void load_cells(std::string path);
private:
    Field* field;
    Player* player;
};
