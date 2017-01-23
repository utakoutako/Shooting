#include "stdafx.h"
#include "ShootingApp.h"


ShootingApp::ShootingApp()
{
	App();

}


ShootingApp::~ShootingApp()
{
}

void ShootingApp::init(void) {
	fighter.init();
	enemyA[0].init();
	enemyA[1].init();
}
void ShootingApp::cleanup(void) {
	fighter.cleanup();
}
void ShootingApp::update(void) {
	fighter.update();
	enemyA[0].update();
	enemyA[1].update();
}
void ShootingApp::draw(void) {
	fighter.draw();
	enemyA[0].draw();
	enemyA[1].draw();
}
void ShootingApp::keyDown(WPARAM key) {
	switch (key) {
	case VK_LEFT:
		fighter.move(Fighter::LEFT);
		break;
	case VK_RIGHT:
		fighter.move(Fighter::RIGHT);
		break;
	case VK_UP:
		fighter.move(Fighter::FORE);
		break;
	case VK_DOWN:
		fighter.move(Fighter::BACK);
		break;
	}
}
void ShootingApp::keyUp(WPARAM key) {
	switch (key) {
	case VK_LEFT:
			fighter.stop(Fighter::LEFT);
			break;
		case VK_RIGHT:
			fighter.stop(Fighter::RIGHT);
			break;
		case VK_UP:
			fighter.stop(Fighter::FORE);
			break;
		case VK_DOWN:
			fighter.stop(Fighter::BACK);
			break;
		}
	}





