#pragma once
#include <iostream>
#include <fstream>
class ControlReader
{
	const char* file_path = 0;
	std::fstream file;
	enum eDirection { UP = 0, LEFT, DOWN, RIGHT };
public:
	eDirection dir;
	ControlReader();
	~ControlReader();
	void read();
	void free_file();
	void set_output();
};