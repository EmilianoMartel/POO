#include "Bullet.h"

Bullet::Bullet(int x, int y) {
	this->x = x;
	this->y = y;
	if (!activeInstances) {
		activeInstances = 1;
	}
	else {
		activeInstances++;
	}
}

void Bullet::show(){
	cout << "0";
}

void Bullet::hide(){

}

int Bullet::getX(){
	return x;
}

int Bullet::getY() {
	return y;
}

int Bullet::getActiveInstances() {
	return activeInstances;
}