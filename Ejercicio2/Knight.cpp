#include "Knight.h"

Knight::Knight(string name, float maxHealth, float baseDamage, float baseArmor){
	this->name = name;
	this->maxHealth = maxHealth;
	this->baseDamage = baseDamage;
	this->baseArmor = baseArmor;
	currentHealth = maxHealth;
}

void Knight::setSword(Sword sword) {
	this->sword = sword;
}

void Knight::setShield(Shield shield) {
	this->shield = shield;
}

void Knight::attack(Knight enemy) {
	std::cout << name << " attack " << enemy.getName() << endl;
	enemy.receiveDamage(baseDamage + sword.getDamage());
}

void Knight::receiveDamage(float damage) {
	int totalDamage = damage - shield.getArmor();
	if (totalDamage < 0) {
		totalDamage = 0;
	}
	currentHealth -= totalDamage;

	std::cout << name << " recive " << totalDamage << " damage." << endl;
	std::cout << name << " have " << currentHealth << " life points." << endl;
}

string Knight::getName() {
	return name;
}

float Knight::getCurrentHealth() {
	return currentHealth;
}

bool Knight::isAlive() {
	if (currentHealth <= 0) {
		return false;
	}
	return true;
}