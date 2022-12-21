#include "ObserveGame.h"
ObserveGame::ObserveGame() : process(false) {
}
//void ObserveGame::removeMeFromAllLists()
//{
//	std::list<ISubject*>::iterator iterator = list_subject_.begin();
	//while (iterator != list_subject_.end()) {
	//	(*iterator)->detach(this);
	//	++iterator;
	//}
//}

void ObserveGame::start() {
	process = true;
	//this->notify(new GameMessage, START);
}
bool ObserveGame::getProcess()
{
	return process;
}

void ObserveGame::upd()
{
	process = false;
	//this->notify(new GameMessage, OVER);
}