#include "Ball.h"
#include "Graphics.h"

int Ball::getX()
{
    return locx;
}

int Ball::getY()
{
    return locy;
}

void Ball::move()
{
	locx += vx;
	locy += vy;

	const int right = locx + rad_big;
	
	if (right >= Graphics::ScreenWidth)
	{
		locx = (Graphics::ScreenWidth - 1) - rad_big;
		vx = -vx;
	}

	const int bottom = locy + rad_big;
	if ((locy - rad_big) < 0)
	{
		locy = rad_big;
		vy = -vy;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		locy = (Graphics::ScreenHeight - 1) - rad_big;
		vy = -vy;
	}
}

bool Ball::isCollision(Paddle& p)
{
	const int paddleright = p.getX() + p.getWidth();
	const int paddlebottom = p.getY() + p.getHeight();
	const int ballright = locx + rad_big;
	const int ballbottom = locy + rad_big;

	return
		paddleright >= locx - rad_big &&
		p.getX() <= ballright &&
		paddlebottom >= locy - rad_big &&
		p.getY() <= ballbottom;
}

int Ball::getRadius()
{
	return rad_big;
}

void Ball::DrawBall(Graphics& gfx)
{
	gfx.DrawDonut(locx, locy, rad_big, rad_big - 10, Colors::Magenta);
}

void Ball::changeSpeed()
{
	vx *= -1;
}
