#pragma once
#include <string>

using namespace std;

class Player {
private:
	string name;
	int iD;
	bool isOnline;
	static int totalIds;
public:
	Player(string name);
	string GetName();
	int GetID();
	bool GetIsOnline();
};