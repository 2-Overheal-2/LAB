#include "MessageGame.h"

MessageGame::MessageGame(Level* l): level(l){}

std::string MessageGame::get_message() {
	return level->get_level() + level->get_command()->do_something();
}