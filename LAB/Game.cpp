#include "Game.h"
// � � � � � � �   � � � � �
void Game::run()
{
	std::vector<ObserverLevel*>level;
	std::vector<Logger*>log;
	LogMenu logmenu;
	LevelContext* context=new LevelContext(new HardLevel);
//	InputLevelGame inputlevelgame;
//	inputlevelgame.get_level_game(context);
	Field* field;
	int choose_level;
	std::cout << "������� �������" << std::endl;
	std::cin >> choose_level;
	if (choose_level == 1) {
		LevelContext* context = new LevelContext(new EasyLevel);
		context->setStrategy(new EasyLevel);
		field = context->createLevel();
	}
	else if (choose_level == 2) {
		LevelContext* context = new LevelContext(new HardLevel);
		context->setStrategy(new HardLevel);
		field = context->createLevel();
	}
	else {
		LevelContext* context = new LevelContext(new EasyLevel);
		context->setStrategy(new EasyLevel);
		field = context->createLevel();
	}
	FieldCheck check;
	if (!check.check(field)) {
		delete field;
		return;
	}

	//context->setStrategy(new EasyLevel);
	/*if (inputlevelgame.get_level_game() == 1) {
		LevelGenerator levelgenerator;
	}*/
	logmenu.set_levels(&level);
	logmenu.set_loggers(log);
	Menu menu;
//	menu.start();
//	level.push_back(new LevelGame());
//	level.push_back(new LevelInfo());
//	level.push_back(new LevelWarning());
//	log.push_back(new LoggerFile(nullptr));
//	log.push_back(new LoggerConsole(nullptr));
	ISubject* isubject = new Subject(level,log);
	Input* input = new Input;
	input->set_keyboard();
	MotionLogic* motionlogic = new MotionLogic;
	Player* player = new Player;
	GameLogic gamelogic;
	FieldView fieldView;
	int gameover = 1;
	isubject->prefex("[INF]", new CommandGameStart());
	isubject->notify();
	Sleep(900);
    Field save_field=*field;
    Player player2=*player;
    WrongTransaction *w=new WrongTransaction(save_field,player2);
	while (gameover) {
		fieldView.DrawField(field, player);
		input->Read(gameover);
		motionlogic->start(input->getDir(), *field,isubject, player,w);
		gamelogic.start(*field, *player,gameover,isubject);
		isubject->notify();
	}
}