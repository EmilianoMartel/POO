#include "Card.h"

string Card::getName(){ return name; }
string Card::getEffect(){ return effect; }

void Card::showCardInfo(){
    cout << "Card: " << name << ", Effect: " << effect << endl;
}