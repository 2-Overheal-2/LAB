#include "KeyboardReader.h"

char KeyboardReader::reader() {
	//if (_kbhit()) {
	char symbol = _getch();
	return symbol;
	//}
}