#include <iostream>
#include <sstream>
#include "AdminConection.h"

using namespace std;

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


int questionWithIntReturn(string question) {
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

int main()
{
	AdminConection admin;
	int input;
	bool exit = false;
	do
	{
		int indexer;
		cout << "1  -  Conect new player" <<  endl;
		cout << "1  -  Disconect player" << endl;
		cout << "1  -  Reconect player" << endl;
		input = questionWithIntReturn("Select a option: ");
		switch (input)
		{
		case 1:
			admin.NewPlayer();
			break;
		case 2:
			admin.DisconectPlayer();
			break;
		case 3:
			admin.ReconectPlayer();
			break;
		default:
			cout << "Wrong input." << endl;
			break;
		}
	} while (input != 3);
}