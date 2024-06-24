#include "QueueAdmin.h"

void QueueAdmin::addClient(Client& cliente) {
    queueClient.push(cliente);
    cout << "Client added to queue.\n";
}

void QueueAdmin::serveClient() {
    if (!queueClient.empty()) {
        Client servedClient = queueClient.front();
        queueClient.pop();
        cout << "Seved client: ";
        servedClient.printInfo();
    }
    else {
        cout << "There are no clients in line.\n";
    }
}

void QueueAdmin::showQueueInfo(){
    if (!queueClient.empty()) {
        cout << "First client: ";
        queueClient.front().printInfo();
        cout << "Last client: ";
        queueClient.back().printInfo();
    }
    else {
        cout << "There are no clients in line.\n";
    }
}