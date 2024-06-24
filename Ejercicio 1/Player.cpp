#include "Player.h"

int Player::totalIds = 0;

Player::Player(string name) {
	this->name = name;
	if (!totalIds)
		totalIds = 0;
	else
		totalIds++;
	iD = totalIds;
	isOnline = true;
}

string Player::GetName() {
	return name;
}

int Player::GetID() {
	return iD;
}

bool Player::GetIsOnline() {
	return isOnline;
}