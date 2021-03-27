#include <iostream>

using namespace std;

int main()
{

	// Declaring variables
	string firstname;
	string lastname;
	string initials;
	string secret = "TM";
	bool winner;

	// Output and Input
	cout << "Enter the secret initials" << endl;
	cin >> initials;
	cout << "Checking if you have the secret initials" << endl;
	
	// Assignment if statement
	if (initials == secret) {
		winner = true;
	}
	else {
		winner = false;
	}

	// Output if
	if (winner == true) {
		cout << "You are the winner! \nThe initials stand for Trade-Mark." << endl;
	}
	else {
		cout << "Sorry, you lose." << endl;
	}

	//To do later: Have the first and lastname define the initials with code
	cout << "Set your own secret initials:" << endl;
	cin >> initials;
	cout << "You have chosen " << initials << " as your secret initials. \nNow, enter your first name: " << endl;
	cin >> firstname;
	cout << "You selected " << firstname << " as your firstname. Enter your selection for a lastname:" << endl;
	cin >> lastname;
	cout << "You selected " << lastname << " as your lastname." << endl;
	cout << "Your selected name is " << firstname << " " << lastname << " with the initials of " << initials << endl;

}

// Take notes.