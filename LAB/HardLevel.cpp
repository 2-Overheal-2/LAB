#include "HardLevel.h"

Field* HardLevel::generateLevel()
{
	return this->levelGenerator.get_map();
}