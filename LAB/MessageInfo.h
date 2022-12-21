#pragma once
#include "Level.h"
class MessageInfo :public Message
{
public:
	MessageInfo(Level* level);
	std::string get_message() override;
private:
	Level* level;
};
