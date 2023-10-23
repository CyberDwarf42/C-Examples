//SDEV-340-45
//12/03/2022
//Aaron Gockley
//SecuritySystem Implementation

#include "SecuritySystem.h"

SecuritySystem::SecuritySystem() {}; //base cosntructor
SecuritySystem::SecuritySystem(int Input_Sensitivity, bool Input_Status, string Input_Room) :Device(Input_Status, Input_Room) { //overloaded constructor.

	SecuritySystem::LightSensitivity = Input_Sensitivity; //sets sensitivity

};


void SecuritySystem::set_LightSensitivity(int Input_Sensitivity) { //sets sensitivity

	SecuritySystem::LightSensitivity = Input_Sensitivity;

};
int SecuritySystem::get_LightSensitivity() { //gets sensitivity.

	return LightSensitivity;

};

void SecuritySystem::change_LightsSensitivity() { //changes the light sensitivity
	int N_S;
	do {
		cout << "Please enter a new motion sensitivity: ";
		cin >> N_S; cout << endl;
		if (cin.fail()) { //if the input fails it sets the 
			validInput = CheckInput();
		}
		else if (N_S >= 1 && N_S <= 5) { //checks that it is in the range of the sensitivity.
			set_LightSensitivity(N_S);
			cout << "The Motion Sensitivity is now: " << get_LightSensitivity() << endl; break; //outputs the new sensitivity.
		} 
		else { cout << "Incorrect Input." << endl << endl; } //tells you it is wrong. 
	} while (validInput == false);
}