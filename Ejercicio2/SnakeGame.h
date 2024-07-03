#pragma once
#include "AwesomeLibrary.h"
#include <vector>
#include <conio.h>
#include <chrono>
#include <thread>

class SnakeGame {
private:
    vector<pair<int, int>> snake;
    int x;
    int y;
    bool isGameOver;
    bool hasWon;
    int winSnakeLength;
    void update();
    void draw();
    void move();
    void waitForInput();
    void showResult();
    void checkCollision();
public:
	SnakeGame(int winSnakeLenght);
	void play();
};