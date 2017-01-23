#pragma once
#include <Windows.h>

class App
{
public:
	static HWND hWnd;
	static HDC hDC;
	static double rand(void);

	App(void);
	virtual ~App(void);

	virtual void init(void);
	virtual void cleanup(void);
	virtual void update(void);
	virtual void draw(void);
	virtual void keyDown(WPARAM key);
	virtual void keyUp(WPARAM key);
};

