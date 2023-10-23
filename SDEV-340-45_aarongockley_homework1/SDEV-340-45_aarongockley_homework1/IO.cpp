//Aaron Gockley
//11/06/2022
//SDEV-340-45-homework1
//IO Implementation
#include <iostream>
#ifndef IOHeader
#include "IO.h"
#endif // !IOHeader
using namespace std;

Input::Input() {}; // basic constructor
int Input::scoresentry() { // this loops through to enter an array of 6 numbers.
	int Entry = 0;
	for (int i = 0; i < 7; i++) {
		cout << "Please enter a number between 0 and 100. " << endl; // asks for a number.
		cin >> Entry;
		while (!cin) {
			cout << "That was not a number. Please try again: "; //I based this off something I found to check if it is a number.
			cin.clear();
			cin.ignore();
			cin >> Entry;
		}
		if (Entry < 0 || Entry > 100) { // this checks to see if it is in a range between 0 and 100. 
			cout << "Not a valid number. Please try again: ";
			cin.clear();
			cin.ignore();
			cin >> Entry;
		}
		else { //if everything checks out then it enters it in the 
			scores[i] = Entry;
		}
	}
	for (int j = 0; j < 7; j++) { // prints out the array
		cout << scores[j] << ", ";
	}
	return 0;
}
