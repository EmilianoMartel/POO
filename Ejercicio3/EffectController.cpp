#include "EffectController .h"

void EffectController::addCard(Card& card) {
    effectStack.push(card);
    cout << "Card added to the effect chain: ";
    card.showCardInfo();
}

void EffectController::resolveEffects() {
    if (effectStack.empty()) {
        cout << "No effects to resolve.\n";
        return;
    }

    cout << "Resolving effects:\n";
    while (!effectStack.empty()) {
        Card card = effectStack.top();
        effectStack.pop();
        cout << "Resolving '" << card.getName() << "': " << card.getEffect() << endl;
    }
}