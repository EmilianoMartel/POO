#pragma once
#include <iostream>
#include <string>
#include <queue>
#include <iostream>
#include "Client.h"
using namespace std;

class QueueAdmin {

private:
    queue<Client> queueClient;

public:
    void addClient(Client& cliente);

    void serveClient();

    void showQueueInfo();
};