﻿#pragma once
#include "Vector2.h"

class Player
{
private:
	Vector2 pos_;
	float speed_;
public:
	Player();

	void Init();
	void Update();
	void Draw();

	// メンバ関数
	void MoveRight();
	void MoveLeft();
};

