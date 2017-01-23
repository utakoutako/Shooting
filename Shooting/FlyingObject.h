#pragma once
#include "Timer.h"

class FlyingObject
{
protected:
	double x;		// ���݂̈ʒu (pixel)
	double vx;		// ���݂̈ړ����x (pixel/s)
	double y;
	double vy;
	Timer lap;		// �O���update����̌o�ߎ��Ԍv���p
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

