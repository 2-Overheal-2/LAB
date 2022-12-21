#pragma once
#include <cstdio>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include "KeyboardReader.h"
#include <map>


class Input
{
public:
	enum eDirection { UP, LEFT, DOWN, RIGHT, SAVE, LOAD };
	Input();
	~Input();
	void set_keyboard();
	void Read(int&);
	eDirection getDir();
private:
	//std::fstream file;
	IReader* ireader;
	eDirection dir;
	std::map <std::string, char> mp;
	int flag = 0;
	char command;
	std::string key;
	void check_reapets();
	void set_flag();
	int get_flag();
};
