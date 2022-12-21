#include "MessageWarning.h"
MessageWarning::MessageWarning(Level* l) : level(l) {}

std::string MessageWarning::get_message() {
	return level->get_level() + level->get_command()->do_something();
}