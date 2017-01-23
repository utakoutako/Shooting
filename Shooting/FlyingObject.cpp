#include "stdafx.h"
#include "ShootingApp.h"
#include "FlyingObject.h"

FlyingObject::FlyingObject(void) : x(0), vx(0),y(0),vy(0),radius(0),status(0)
{
}


FlyingObject::~FlyingObject(void)
{
}

void FlyingObject::init(void)
{
	x = 0;
	y = 0;
	vx = 0;
	vx = 0;
	lap.reset();
	radius = 0;
	status = ACTIVE;
	mtimer.reset();

}

void FlyingObject::cleanup(void)
{
	status = 0;

}

void FlyingObject::update(void)
{
}

void FlyingObject::draw(void)
{
}

void FlyingObject::drawDebug(void) {
	hpen = CreatePen(PS_DOT, 0.1, RGB(255, 0, 0));
	SelectObject(App::hDC, hpen);
	Ellipse(App::hDC, x, y, x + radius, y + radius);

}
