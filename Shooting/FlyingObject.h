#pragma once
#include "Timer.h"

class FlyingObject
{
protected:
	double x;		// 現在の位置 (pixel)
	double vx;		// 現在の移動速度 (pixel/s)
	double y;
	double vy;
	Timer lap;		// 前回のupdateからの経過時間計測用
	double radius;
	Timer mtimer;
	HPEN hpen;
public:
	FlyingObject(void);
	virtual ~FlyingObject(void);

	virtual void init(void);
	virtual void cleanup(void);
	virtual void update(void);
	virtual void draw(void);
	virtual void drawDebug(void);
	unsigned int status = 0;
	enum STATUS {
		ACTIVE = 1,
	COLLISION = 2

	};
};

