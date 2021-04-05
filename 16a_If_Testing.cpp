#include <iostream>;
#include <string>;

using namespace std;

// New naming convention
// Want to mess around with toupper/tolower\
// StrString is soft-error -- should be named chChar
// Stolen code (cplusplus.com)

int main() {

	char strString;

	cout << "Enter a number, a letter, or a special character -- only one digit: ";
	cin >> strString;
	
	if ((strString >= 'a' && strString <= 'z') || (strString >= 'A' && strString <= 'Z')) {
		cout << strString << " is ALPHABETICAL (letter)." << endl; 
	}

	else if (strString >= '0' && strString <= '9') {
		cout << endl << strString << " is a DIGIT (number).";
	}

	else {
		cout << endl << strString << " is SPECIAL CHARACTER.";
	}

	return 0;

}