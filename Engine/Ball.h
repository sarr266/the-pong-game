#pragma once

#include "Paddle.h"
#include "Graphics.h"

class Ball
{
public:
	int getX();
	int getY();
	void move();
	bool isCollision(Paddle& p);
	int getRadius();
	void DrawBall(Graphics& gfx);
	void changeSpeed();
private:
	int locx = 400;
	int locy = 300;
	static constexpr int rad_big = 20;
	int vx = 2;
	int vy = 2;
};