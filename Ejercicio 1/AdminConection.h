#pragma once
#include <iostream>
#include <list>
#include "Player.h"

using namespace std;

class AdminConection {
private:
	list<Player> onLinePlayers;
	list<Player> offLinePlayers;
public:
	void NewPlayer();
	void DisconectPlayer();
	void ReconectPlayer();
};