#pragma once
#include "Message.h"
#include "Level.h"
class MessageGame :public Message
{
public:
	MessageGame(Level* level);
	std::string get_message() override;
private:
	Level* level;
};

