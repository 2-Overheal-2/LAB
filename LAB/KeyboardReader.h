#pragma once
#include "IReader.h"
#include <conio.h>
class KeyboardReader :public IReader{
    char reader() override;
};