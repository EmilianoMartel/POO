#include <iostream>
#include "QueueAdmin.h"

void showMenu() {
    cout << "Select an option:\n";
    cout << "1. Add a new client to the queue\n";
    cout << "2. Serve the next client in the queue\n";
    cout << "3. Show information of the first and last client in the queue\n";
    cout << "4. Exit\n";
}

int main() {
    QueueAdmin admin;
    int option;

    do {
        showMenu();
        cin >> option;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpiar el buffer de entrada

        switch (option) {
        case 1: {
            string name, lastname;
            int age;

            cout << "Name: ";
            getline(cin, name);
            cout << "Lastname: ";
            getline(cin, lastname);
            cout << "Age: ";
            cin >> age;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer de entrada

            Client newClient(name, lastname, age);
            admin.addClient(newClient);
            break;
        }
        case 2:
            admin.serveClient();
            break;
        case 3:
            admin.showQueueInfo();
            break;
        case 4:
            cout << "Exit program.\n";
            break;
        default:
            cout << "Invalid input try again.\n";
            break;
        }
    } while (option != 4);

    return 0;
}