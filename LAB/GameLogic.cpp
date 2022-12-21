#include "GameLogic.h"

void GameLogic::start(Field& field, Player& player,int &gameover,ISubject *i)
{
	int playerX = field.currentPlayerX();
	int playerY = field.currentPlayerY();
	Cell* playerCell = field.matrix().at(playerY).at(playerX);
	if (player.get_health() == 0) {
		i->prefex("[INF]", new CommandLose());
		GameEvent* factory = new GameEvent();
		factory->createSecEvent()->do_event();
		delete factory;
		gameover = 0;
	}
	else if (player.get_powerup()) {
		i->prefex("[INF]", new CommandWin());
		GameEvent* factory = new GameEvent;
		factory->createEvent()->do_event();
		delete factory;
		gameover = 0;
	}
	else {
		if (playerCell->getType() == POWERUP) {
			PlayerEvent* factory = new PlayerEvent(&player);
			factory->createThirdEvent()->do_event();
			delete factory;
		}
		if (playerCell->getType() == HEAL) {
			i->prefex("[GAM]", new CommandHeal());
			PlayerEvent* factory = new PlayerEvent(&player);
			factory->createEvent()->do_event();
			delete factory;
			FieldEvent* changecell = new FieldEvent(&field);
			changecell->createEvent()->do_event();
			delete changecell;
		}
		if (playerCell->getType() == ENEMY) {
			i->prefex("[GAM]", new CommandDamage());
			PlayerEvent* factory = new PlayerEvent(&player);
			factory->createSecEvent()->do_event();
			delete factory;
		} 
	}

}