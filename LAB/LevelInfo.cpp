#include "LevelInfo.h"
LevelInfo::LevelInfo() {
	level = "[INF]";
	is_update = false;
}
Message* LevelInfo:: update(){
	if (is_update) {
		is_update = false;
		return new MessageInfo(this);
	}
	else
		return nullptr;
}