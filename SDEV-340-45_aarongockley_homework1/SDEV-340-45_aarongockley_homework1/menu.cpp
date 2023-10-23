//Aaron Gockley
//11/06/2022
//SDEV-340-45-homework1
//Menu Implementation
#include <iostream>
#include <string>
#ifndef MenuHeader
#include "menu.h"
#endif // !MenuHeader
#include "IO.h"
#include "Math.h"
using namespace std;

menu::menu(){} // constructs the menu
int menu::main() { // creates the objects. 
	Math MathLibrary;
	Input Input;
	int* ptr;
	Input.scores;
	MathLibrary.scores;

	ptr = Input.scores;

	int choice = 10; // creates temporary choices.
	do {
		cout << "1. Enter Array." << endl; // will use for entry.
		cout << "2. Average." << endl; // will use for average.
		cout << "3. Deviance." << endl; // will use for deviance.
		cout << "4. Variance." << endl; // will use for variance.
		cout << "5. Deviation." << endl; // will use for deviation.
		cout << "Please enter an option, hit '0' to quit" << endl; // gives a quit option.
		cin >> choice; // records choice.
		switch (choice) {
		case 1:
			Input.scoresentry(); // runs the entry into an array in the input class
			for (int j = 0; j < 7; j++) { // loops through
				MathLibrary.scores[j] = *ptr; // this then loops through the pointer in the input array to move things to the math array.
				*ptr++;
			}
			cout << endl;
			break;
			//for (int k = 0; k < 7; k ++) {
				//cout << MathLibrary.scores[k] << endl; // this is a bit of code used to test that the above loop worked properly.
			//}
		case 2:
			cout << MathLibrary.Average() << endl; // calls the average function.
			break;
		case 3:
			cout << MathLibrary.Deviance() << endl; // calls the deviance function.
			break;
		case 4:
			cout << MathLibrary.Variance() << endl; // calls the variance function.
			break;
		case 5:
			cout << MathLibrary.Deviation() << endl; // calls the deviation function. 
			break;
		}
	}
		while (choice != 0);
		return choice;
}