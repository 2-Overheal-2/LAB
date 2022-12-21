#include "ControlReader.h"
ControlReader::ControlReader() {
	set_output();
	char c;
	file.seekg(1);
	file.get(c);
	std::cout << c << std::endl;
}

void ControlReader::read(){
	char c;
	file.seekg(2);
	file.get(c);
	std::cout << c << std::endl;
}

ControlReader::~ControlReader() {
	free_file();
}

void ControlReader::free_file() {
	file.close();
}
void ControlReader::set_output() {
	file_path = "HeaderFiles/Controls.txt";
	file.open(file_path);
}