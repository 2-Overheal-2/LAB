#pragma once
#include "Field.h"
#include "Player.h"
#include <fstream>
#include "WrongWriteFile.h"
class SaveData {
public:
    SaveData(Field* m, Player* p);
    void save_cells(std::string path);
    void save_position(std::string path);
    void save_characteristics(std::string path);
private:
    Field* field;
    Player* player;
};