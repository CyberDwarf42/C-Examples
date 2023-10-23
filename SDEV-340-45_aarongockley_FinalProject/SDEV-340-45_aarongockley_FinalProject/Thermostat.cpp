//SDEV-340-45
//12/03/2022
//Aaron Gockley
//Thermostat Implementation

#include "Thermostat.h"

Thermostat::Thermostat() {}; //base constructor
Thermostat::Thermostat(float Input_Temp_Day, float Input_Temp_Eve, bool InputStatus, string InputRoom) : Device(InputStatus, InputRoom) { //overloaded constructor

	Thermostat::Temp_Day = Input_Temp_Day;// sets day temp
	Thermostat::Temp_Evening = Input_Temp_Eve; //sets evening temp

};

void Thermostat::set_Temp_Day() { //sets day temp
		float New_Temp;
	do {
		
		cout << "Please enter new temperature: " << endl;
		cin >> New_Temp; //possibly run error handling to check inputs?
		if (cin.fail()) {
			validInput = CheckInput();
		}
		else {
			Temp_Day = New_Temp; //runs the input using the set temp day function.
			cout << "New Day Temperature is: " << get_Temp_Day() << endl; //returns changed temperature
		}; break;
	} while (validInput == false);
};
float Thermostat::get_Temp_Day() { //gets day temp

	return Temp_Day;

};
void Thermostat::set_Temp_Eve() { //sets temp eve

	float New_Temp;
	do {
		cout << "Please enter new temperature: " << endl; //same as day
		cin >> New_Temp;
		if (cin.fail()) {
			validInput = CheckInput();
		}
		else {
			Temp_Evening = New_Temp; //same as day
			cout << "New Evening Temperature is: " << get_Temp_Eve() << endl;
		}; break;
	} while (validInput == false);

};
float Thermostat::get_Temp_Eve() { //gets temp eve

	return Temp_Evening;

};
