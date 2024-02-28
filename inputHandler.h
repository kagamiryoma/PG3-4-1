#pragma once
#include "ICommand.h"

class InputHandler
{
public:
	Icommand* HandleInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveRightCommand2PressKeyD();

private:
	Icommand* pressKeyD_;
	Icommand* pressKeyA_;
};

