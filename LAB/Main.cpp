#include <iostream>
#include "Game.h"
#include <locale.h>
#include <windows.h>

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	Game game; 
	game.run();
	return 0;
}