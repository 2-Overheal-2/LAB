#include "InputLevelGame.h"

int InputLevelGame::get_level_game(LevelContext* context) {
	int level;
	std::cout << "¬ведите уровень"<<std::endl;
	std::cin >> level;
	return level;
	if (level == 1) {
		context->setStrategy(new EasyLevel);
	}
	else if (level = 2) {
		context->setStrategy(new HardLevel);
	}
}

