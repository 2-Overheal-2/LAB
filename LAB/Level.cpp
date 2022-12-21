#include "Level.h"
void Level::set_command(Commands* val) {
    key = val;
    is_update = true;
}
Commands* Level::get_command() {
    return key;
}
std::string Level::get_level() {
    return level;

}