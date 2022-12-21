#include "LoadData.h"
LoadData::LoadData(Field* map, Player* p) {
    field = map;
    player = p;
}

void LoadData::load_cells(std::string path) {
    std::ifstream in;
    int s;
    in.open(path, std::ios::in);
    if (!in.is_open())
        throw WrongReadFile(path);
    for (int i = 0; i < field->get_size(); i++) {
        for (int j = 0; j < field->get_size(); j++) {
            in >> s;
            if (s < 0 || s > 5)
                throw WrongData(path, std::to_string(i * field->get_size() + j));
            field->matrix()[i][j]->set_state(s);
        }
    }
}
void LoadData::load_characteristic(std::string path) {
    std::ifstream in;
    in.open(path, std::ios::in);
    if (!in.is_open())
        throw WrongReadFile(path);
    int health = 0, lvl = 0, powerup = 0;
    in >> health >> lvl  >> powerup;
    player->set_health(health);
    player->set_lvl(lvl);
    player->set_pow(powerup);
    in.close();
}
void LoadData::load_position(std::string path) {
    std::ifstream in;
    in.open(path, std::ios::in);
    if (!in.is_open())
        throw WrongReadFile(path);
    float x, y;
    in >> x >> y;
    field->movePlayerY(y);
    field->movePlayerX(x);
    in.close();
}