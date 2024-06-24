#pragma once
#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include "Card.h"
using namespace std;

class EffectController {
private:
    stack<Card> effectStack;

public:
    void addCard(Card& card);
    void resolveEffects();
};