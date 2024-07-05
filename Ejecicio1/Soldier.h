#pragma once
#include <iostream>
#include <vector>
#include <random>

using namespace std;

class Soldier {
protected:
	string name;
	int maxLifePoints;
	int currentLifePoints;
	int maxStamina;
	int currentStamina;
	int damage;
	int position;

public:
	Soldier(string name,int maxPoints, int maxStamina, int damage, int position);
	virtual ~Soldier();
	virtual void attack(vector<Soldier*> enemies);
	virtual void takeDamage(int damage);
	int getPosition();
	bool canAttack();
	bool isAlive();
	void rest();
};