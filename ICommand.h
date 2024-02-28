#pragma once
#include <Player.h>
class Player;

class Icommand
{
public:
	virtual ~Icommand();
	virtual void Exec(Player& player) = 0;
};

class RightCommand : public Icommand {
public:
	void Exec(Player& player) override;
};

class LeftCommand : public Icommand {
public:
	void Exec(Player& player) override;
};


