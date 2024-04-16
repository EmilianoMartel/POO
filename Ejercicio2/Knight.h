#pragma once
#include <string>
#include <iostream>
#include "Shield.h"
#include "Sword.h"
using namespace std;

class Knight {
private:
	Sword sword = Sword("",0);
	Shield shield = Shield("",0);
	string name;
	float maxHealth;
	float currentHealth;
	float baseDamage;
	float baseArmor;

public:
	Knight(string name, float maxHealth, float baseDamage, float baseArmor);
	void setSword(Sword sword);
	void setShield(Shield shield);
	void attack(Knight enemy);
	void receiveDamage(float damage);
	string getName();
	float getCurrentHealth();
	bool isAlive();
};