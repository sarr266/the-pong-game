#include "Paddle.h"
#include "Graphics.h"

void Paddle::clampToScreen()
{
	const int bottom = locy + getHeight();
	if (locy < 0)
	{
		locy = 0;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		locy = (Graphics::ScreenHeight - 1) - getHeight();
	}
}

void Paddle::update(Keyboard& kbd)
{
	if (kbd.KeyIsPressed(VK_DOWN))
	{
		locy += delta;
	}
	if (kbd.KeyIsPressed(VK_UP))
	{
		locy -= delta;
	}
}

void Paddle::drawPaddle(Graphics& gfx)
{
	gfx.DrawRectDim(locx, locy, getWidth(), getHeight(), Colors::Cyan);
}

int Paddle::getHeight()
{
	return height;
}

int Paddle::getWidth()
{
	return width;
}

int Paddle::getX()
{
	return locx;
}

int Paddle::getY()
{
	return locy;
}
