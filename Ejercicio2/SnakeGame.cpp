#include "SnakeGame.h"
#include <iostream>

SnakeGame::SnakeGame(int winSnakeLength)
    : x(50 / 2), y(50 / 2), isGameOver(false), hasWon(false), winSnakeLength(winSnakeLength) {
    snake.push_back({ x, y });
}

void SnakeGame::update() {
    move();
    checkCollision();
}

void SnakeGame::draw() {
    system("CLS");
    drawFrame(0, 0, 50, 50);
    for (const auto& segment : snake) {
        goToCoordinates(segment.first, segment.second);
        std::cout << '*';
    }
    goToCoordinates(0, 0); // Reset cursor position
}

void SnakeGame::move() {
    if (_kbhit()) {
        char key = _getch();
        int dx = 0, dy = 0;
        switch (key) {
        case 'w': dy = -1; break; // Up
        case 's': dy = 1; break; // Down
        case 'a': dx = -1; break; // Left
        case 'd': dx = 1; break; // Right
        }
        x += dx;
        y += dy;
        snake.push_back({ x, y });
    }
}

void SnakeGame::checkCollision() {
    // Check for wall collision
    if (x <= 0 || x >= 50 - 1 || y <= 0 || y >= 50 - 1) {
        isGameOver = true;
    }

    // Check for self collision
    for (size_t i = 0; i < snake.size() - 1; ++i) {
        if (snake[i].first == x && snake[i].second == y) {
            isGameOver = true;
        }
    }

    // Check for win condition
    if (snake.size() >= winSnakeLength) {
        hasWon = true;
        isGameOver = true;
    }
}

void SnakeGame::waitForInput() {
    this_thread::sleep_for(chrono::milliseconds(200));
}

void SnakeGame::showResult() {
    system("CLS");
    if (hasWon) {
        cout << "Congratulations, you won!" << endl;
    }
    else {
        cout << "Game over!" << endl;
    }
}

void SnakeGame::play() {
    while (!isGameOver) {
        update();
        draw();
        waitForInput();
    }
    showResult();
}