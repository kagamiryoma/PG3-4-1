#include "ICommand.h"
#include"Player.h"

Icommand::~Icommand()
{
}

void RightCommand::Exec(Player& player)
{
	player.MoveRight();
}

void LeftCommand::Exec(Player& player)
{
	player.MoveLeft();
}
