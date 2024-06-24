#include "AdminConection.h"

bool yesOrNoLoop(string question) {
	string input;
	bool inputValid = false;
	do
	{
		cout << question << endl;
		getline(cin, input);

		if (input == "Y" || input == "y" || input == "N" || input == "n") {
			inputValid = true;
		}
		else {
			cout << "Invalid input. Try again." << endl;
		}
	} while (!inputValid);

	if (input == "Y" || input == "y") {
		return true;
	}
	return false;
}

bool intCheacker(string input) {
	if (input.size() == 0) {
		return false;
	}
	for (char c : input) {
		if (!isdigit(c)) {
			return false;
		}
	}
	return true;
}

int intInputLoop(string question) {
	string input;
	bool inputValid = false;
	do
	{
		cout << question << endl;
		getline(cin, input);

		inputValid = intCheacker(input);

		if (inputValid) {
			return stoi(input);
		}
		else {
			cout << "Invalid input, try again." << endl;
		}
	} while (!inputValid);
	return 0;
}

void AdminConection::NewPlayer() {
	string name;
	cout << "Insert name:" << endl;
	cin >> name;
	Player player = Player(name);
	onLinePlayers.push_back(name);
}

void AdminConection::DisconectPlayer() {
	bool input = yesOrNoLoop("You know the number Id what you want disconect? Y/N");
	int id;
	if (input)
		id = intInputLoop("Insert the iD number: ");
	else {
		id = intInputLoop("Try with one iD number: ");
	}
	
	Player* temp = nullptr;

	for (auto it = onLinePlayers.begin(); it != onLinePlayers.end(); ) {
		if (it->GetID() == id) {
			temp = &(*it);
			it = onLinePlayers.erase(it);
			onLinePlayers.erase(it, onLinePlayers.end());
			offLinePlayers.push_back(*temp);
			return;
		}
		else {
			++it;
		}
	}

	cout << "Invalid ID" << endl;

}

void AdminConection::ReconectPlayer() {
	bool input = yesOrNoLoop("You know the number Id what you want reconect? Y/N");
	int id;
	if (input)
		id = intInputLoop("Insert the iD number: ");
	else {
		id = intInputLoop("Try with one iD number: ");
	}

	Player* temp = nullptr;

	for (auto it = offLinePlayers.begin(); it != offLinePlayers.end(); ) {
		if (it->GetID() == id) {
			temp = &(*it);
			it = offLinePlayers.erase(it);
			offLinePlayers.erase(it, onLinePlayers.end());
			onLinePlayers.push_back(*temp);
			return;
		}
		else {
			++it;
		}
	}

	cout << "Invalid ID" << endl;
}