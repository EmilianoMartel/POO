#pragma once
#include <iostream>
#include <string>

using namespace std;

class Card {
private:
    string name;
    string effect;

public:
    Card(const string& name, const string& effect)
        : name(name), effect(effect) {}

    string getName();
    string getEffect();
    void showCardInfo();
};