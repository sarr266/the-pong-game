#pragma once
#include "Keyboard.h"
#include "Graphics.h"

class Paddle
{
public:
	void clampToScreen();
	void update(Keyboard& kbd);
	void drawPaddle(Graphics& gfx);
	int getHeight();
	int getWidth();
	int getX();
	int getY();
private:
	int locx = 30;
	int locy = 200;
	static constexpr int height = 150;
	static constexpr int width = 40;
	static constexpr int delta = 4;
};