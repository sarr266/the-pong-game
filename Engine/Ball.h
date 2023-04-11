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
private:
	int locx = 300;
	int locy = 100;
	static constexpr int rad_big = 20;
	int vx = 1;
	int vy = 1;
};