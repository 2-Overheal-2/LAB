#include "SaveData.h"
SaveData::SaveData(Field* m, Player* p) {
    field = m;
    player = p;
}

void SaveData::save_position(std::string path) {
    std::fstream out;
    out.open(path, std::ios::out);
    if (!out.is_open())
        throw WrongWriteFile(path);
    float x = field->currentPlayerX(), y = field->currentPlayerY();
    out << x << '\n' << y;
    out.seekp(0, std::ios::beg);
    out.close();
}

void SaveData::save_characteristics(std::string path) {
    std::fstream out;
    out.open(path, std::ios::out);
    if (!out.is_open())
        throw WrongWriteFile(path);
    out << player->get_health() << '\n' << player->get_lvl() << '\n' << player->get_powerup();
    out.seekp(0, std::ios::beg);
    out.close();
}
void SaveData::save_cells(std::string path) {
    std::fstream out;
    out.open(path, std::ios::out);
    if (!out.is_open())
        throw WrongWriteFile(path);
    for (int i = 0; i < field->get_size(); i++)
        for (int j = 0; j < field->get_size(); j++) {
            out << field->matrix()[i][j]->getType() << "\n";
        }
    out.seekp(0, std::ios::beg);
    out.close();
}