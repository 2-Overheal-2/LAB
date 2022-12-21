#include "LevelGame.h"
LevelGame::LevelGame() {
	level = "[GAM]";
	is_update = false;
}
Message* LevelGame::update() {
	if (is_update) {
		is_update = false;
		return new MessageGame(this);
	}
	else
		return nullptr;
}