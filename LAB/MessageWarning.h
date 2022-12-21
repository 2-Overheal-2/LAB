#pragma once
#include "Level.h"
class MessageWarning :public Message
{
public:
	MessageWarning(Level* l);
	std::string get_message() override;
private:
	Level* level;
};

