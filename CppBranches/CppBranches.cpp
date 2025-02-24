#include <iostream>

#include <string>

using namespace std;

int main() {

	int number;
	cout << "Enter a number: ";
	cin >> number;

	if (number > 10) {
		cout << "The number is greater than 10.\n";
	}

	if (number % 2 == 0) {
		cout << "The number is even!\n";
	} else {
		cout << "The number is odd!\n";
	}

	int choice;
	cout << "Enter a number from 1 to 3: ";
	cin >> choice;

	switch (choice) {
		case 1:
			cout << "You selected Option 1.\n";
			break;
		case 2:
			cout << "You selected Option 2.\n";
			break;
		case 3:
			cout << "You selected Option 3.\n";
		default:
			cout << "Invalid selection! Please enter 1, 2, or 3.\n";
	}

}