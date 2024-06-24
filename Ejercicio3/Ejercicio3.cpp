#include <iostream>
#include "EffectController .h"

void showMenu() {
    cout << "Select an option:\n";
    cout << "1. Add a new card to the chain\n";
    cout << "2. Resolve the chain of effects\n";
    cout << "3. Exit\n";
}

int main() {
    EffectController controller;
    vector<Card> cardPool = {
        Card("Assassination", "Destroys an opponent's unit"),
        Card("Healing", "Restores 5 health points"),
        Card("Fireball", "Deals 10 damage to the opponent"),
        Card("Shield", "Grants 5 shield points"),
        Card("Draw", "Draw 2 cards from the deck")
    };
    int option;

    do {
        showMenu();
        cin >> option;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

        switch (option) {
        case 1: {
            int cardIndex;
            cout << "Select a card to add to the chain:\n";
            for (size_t i = 0; i < cardPool.size(); ++i) {
                cout << i + 1 << ". ";
                cardPool[i].showCardInfo();
            }
            cin >> cardIndex;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

            if (cardIndex > 0 && cardIndex <= cardPool.size()) {
                controller.addCard(cardPool[cardIndex - 1]);
            }
            else {
                cout << "Invalid card selection, please try again.\n";
            }
            break;
        }
        case 2:
            controller.resolveEffects();
            break;
        case 3:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid option, please try again.\n";
            break;
        }
    } while (option != 3);

    return 0;
}