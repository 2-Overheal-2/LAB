#include "LevelWarning.h"
LevelWarning::LevelWarning(){
	level = "[WAR]";
	is_update = false;
}

Message *LevelWarning:: update() {
	if (is_update) {
		is_update = false;
		return new MessageWarning(this);
	}
	else
		return nullptr;
}