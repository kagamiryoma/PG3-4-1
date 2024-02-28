#include "inputHandler.h"
#include "Novice.h"

Icommand* InputHandler::HandleInput()
{
    if (Novice::CheckHitKey(DIK_D)) {
        return pressKeyD_;
    }
    if (Novice::CheckHitKey(DIK_A)) {
        return pressKeyA_;
    }
    return nullptr;
}

void InputHandler::AssignMoveLeftCommand2PressKeyA()
{
    Icommand* command = new LeftCommand();
    pressKeyA_ = command;
}

void InputHandler::AssignMoveRightCommand2PressKeyD()
{
    Icommand* command = new RightCommand();
    pressKeyD_ = command;
}
