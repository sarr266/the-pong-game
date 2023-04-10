#pragma once
#include "Keyboard.h"
#include "Graphics.h"

class Paddle
{
public:
	int locx = 30;
	int locy = 300;
	void clampToScreen();
	void update(Keyboard& kbd);
	void drawPaddle(Graphics& gfx);
	int getHeight();
	int getWidth();
private:
	static constexpr int height = 40;
	static constexpr int width = 40;
	static constexpr int delta = 1;
};