#include "MessageInfo.h"

MessageInfo::MessageInfo(Level* l) : level(l) {}

std::string MessageInfo::get_message() {
	return level->get_level() + level->get_command()->do_something();
}