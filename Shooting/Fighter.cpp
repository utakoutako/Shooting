#include "stdafx.h"
#include "ShootingApp.h"
#include "Fighter.h"

Fighter::Fighter(void) : FlyingObject(), dir(STOP)
{
}

Fighter::~Fighter(void)
{
}

void Fighter::init(void)
{
	FlyingObject::init();

	x = 400;
	vx = 200;
	y = 400;
	vy = 200;
	radius = 60;
}

void Fighter::cleanup(void)
{
	FlyingObject::cleanup();
}

void Fighter::update(void)
{
	FlyingObject::update();

	double dx = 0;
	double dt = lap.get();
	double dy = 0;

	if (dir & LEFT)
		dx -= vx * dt;
	if (dir & RIGHT)
		dx += vx * dt;
	if(dir & FORE)
		dy -= vy * dt;
	if (dir & BACK)
		dy += vy * dt;
	x += dx;
	y += dy;
	lap.reset();
}

void Fighter::draw(void)
{
	LPCWSTR c;
drawDebug();
	c = TEXT("|");
	TextOut(App::hDC, (int)x+29, (int)y+6, c, lstrlen(c));
	c = TEXT("--+--");
	TextOut(App::hDC, (int)x +2, (int)y +25, c, lstrlen(c));
	c = TEXT("-*-");
	TextOut(App::hDC, (int)x +14, (int)y +40, c, lstrlen(c));
	
}


void Fighter::move(DIRECTION dir)
{
	this->dir |= dir;
}

void Fighter::stop(DIRECTION dir)
{
	this->dir &= ~dir;
}

