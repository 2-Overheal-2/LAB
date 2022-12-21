#include "Input.h"
Input::Input() {
	std::ifstream file;
	mp;
	file.open("Controls.txt", std::ios::out);
	std::string line;
	if (file.is_open()) {
		while (!file.eof()) {
			std::getline(file, line);
			if (line.back()== ' ' || line.back() == ':') {
				set_flag();
			}
			if (line.find("up") != std::string::npos) {
				command = line.back();
				key = "up";
				check_reapets();
				mp.insert(std::make_pair(key, command));

			}
			else if (line.find("down") != std::string::npos) {
				command = line.back();
				key = "down";
				check_reapets();
				mp.insert(std::make_pair(key, command));
			}
			else if (line.find("left") != std::string::npos) {
				command = line.back();
				key = "left";
				check_reapets();
				mp.insert(std::make_pair(key, command));
			}
			else if (line.find("right") != std::string::npos) {
				command = line.back();
				key = "right";
				check_reapets();
				mp.insert(std::make_pair(key, command));
			}
			else if (line.find("exit") != std::string::npos) {
				command = line.back();
				key = "quit";
				check_reapets();
				mp.insert(std::make_pair(key, command));
			}
			else if (line.find("save") != std::string::npos) {
				command = line.back();
				key = "save";
				check_reapets();
				mp.insert(std::make_pair(key, command));
			}
			else if (line.find("load") != std::string::npos) {
				command = line.back();
				key = "load";
				check_reapets();
				mp.insert(std::make_pair(key, command));
			}

		}
		if (get_flag() == 1) {
			mp.clear();
			mp.insert(std::make_pair("up", 'w'));
			mp.insert(std::make_pair("down", 's'));
			mp.insert(std::make_pair("left", 'a'));
			mp.insert(std::make_pair("right", 'd'));
			mp.insert(std::make_pair("quit", 'x'));
			mp.insert(std::make_pair("save", 'z'));
			mp.insert(std::make_pair("load", 'r'));
		}
	}		//file.close();
};

Input::~Input(){
		std::ifstream file;
		file.close();
}

void Input::check_reapets() {
	for (auto i : mp) {
		if (i.second == command || i.first == key) {
			set_flag();
		}
	}
}

void Input::set_flag() {
	flag = 1;
}

int Input::get_flag() {
	return flag;
}

void Input::set_keyboard() {
	this->ireader = new KeyboardReader;
}

void Input::Read(int& gameover)
{
	char symbol = ireader->reader();
	if (symbol == mp["up"]) {
		dir = UP;
	}
	else if (symbol == mp["down"]) {
		dir = DOWN;
	}
	else if (symbol == mp["left"]) {
		dir = LEFT;
	}
	else if (symbol == mp["right"]) {
		dir = RIGHT;
	}
	else if (symbol == mp["save"]) {
		dir = SAVE;
	}
	else if (symbol == mp["load"]) {
		dir = LOAD;
	}
	else if (symbol == mp["quit"]) {
		gameover = 0;
	}
	//if (_kbhit()) {
	//	switch (_getch()) {
	//	
	//	case 'w':
	//		dir = UP;
	//		break;
	//	case 'a':
	//		dir = LEFT;
	//		break;
	//	case 's':
	//		dir = DOWN;
	//		break;
	//	case 'd':
	//		dir = RIGHT;
	//		break;
	//	case 'x':
	//		gameover = 0;
	//		break;
	//	}
	//}
}

Input::eDirection Input::getDir()
{
	return dir;
}