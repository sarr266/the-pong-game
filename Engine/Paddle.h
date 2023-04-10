#pragma once

class Paddle
{
public:
	int locx;
	int locy;
	void moveUp();
	void moveDown();
private:
	static constexpr int height = 40;
	static constexpr int width = 40;
	static constexpr int delta = 1;

};