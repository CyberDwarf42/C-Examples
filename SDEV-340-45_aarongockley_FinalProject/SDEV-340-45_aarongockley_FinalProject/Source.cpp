//SDEV-340-45
//12/02/2022
//Aaron Gockley
//MainSourceFile

#include "Lights.h"
#include "SecuritySystem.h"
#include "Television.h"
#include "Thermostat.h"
#include "VacuumBot.h"
#include "Template.h"

#include <iostream>
#include <fstream>
using namespace std;



int main() {

	ofstream myfile;

	enum Options { THERMOSTATS = 1, TELEVISION, VACUUMS, LIGHTS, SECURITY, SAVE, END };

	int TimeOfDay = 1200; //Started looking into date time, but do not have the time to figure it out, will use a pointer with a time of day
	int* Ptr1 = &TimeOfDay;

	string Day_of_Week = "Sunday"; //also am using a pointer to store a day of the week. 
	string* Ptr2 = &Day_of_Week;

	SecuritySystem Security1(3, 1, "House");
	Lights Lights1(1, "Living Room");
	VacuumBot Tron(1, "Living Room");
	Television TV1(49.2, 1, "Living Room");
	Thermostat Thermo1(70, 68.5, 1, "Living Room");

	Security1.set_Schedule_Week(1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000);
	TV1.set_Schedule_Week(1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000);
	Tron.set_Schedule_Week(1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000);
	Lights1.set_Schedule_Week(1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000, 1000, 2000);
	
	//will manually set all that will have scheduling functionality to have the days of the week with basic 0000 in the times. 

	


	int choice1 = 10;
	int choice2 = 10;

	cout << Security1.get_LightSensitivity() << endl;
	cout << Lights1.get_Status() << endl;
	cout << Tron.get_Status() << endl;
	cout << TV1.get_channel() << endl;
	cout << Thermo1.get_Temp_Day() << endl;


	cout << *Ptr1 << endl;
	cout << *Ptr2 << endl;

	while (1) {
		cout << "1. Manage Thermostats." << endl; // chooses Thermostats
		cout << "2. Manage Television." << endl; // chooses Television.
		cout << "3. Manage Vacuums" << endl; // Chooses vacuums
		cout << "4. Manage Lights" << endl; // Chooses Lights
		cout << "5. Manage Security System" << endl; // Chooses Security System.
		cout << "6. Save Settings" << endl; //saves the settings. 
		cout << "Please enter an option, hit '7' to quit" << endl; // gives a quit option.
		cin >> choice1; // records choice.
		switch (choice1) {
		case THERMOSTATS: // if Thermostat changes uses this option
			do {
				Thermo1.validInput1 = false;
				cout << endl << "Manage Thermostats:" << endl;
				cout << "1. Set Morning Temperature" << endl; //will set morning Temp
				cout << "2. Set Evening Temperature" << endl; //will set evening Temp
				cout << "Please enter an option, hit '0' to go back" << endl; // hitting 0 will break back to main menu
				cin >> choice2;
				if (cin.fail()) {
					Thermo1.CheckInput(); continue;
				}//figuring out way to prevent infinite loops for incorrect input.
				else if (choice2 == 1) { //sets the morning temperature.
					Thermo1.set_Temp_Day(); 
				} 
				else if (choice2 == 2) {//sets the evening temperature. 
					Thermo1.set_Temp_Eve();
				}
				else if (choice2 < 0 || choice2  > 2) {
					cout << "Not a valid choice. " << endl; continue;
				}
				else if (choice2 == 0) { Thermo1.validInput1 = true; };

			} while (Thermo1.validInput1 == false);
			continue;
		case TELEVISION: // chooses television
			do {
				TV1.validInput1 = false;
				cout << endl << "Manage Television" << endl;
				cout << "1. Turn TV On/Off." << endl; //lets you manually turn on off
				cout << "2. Change Channel." << endl; // changes channel
				cout << "3. Set Schedule." << endl; //sets the schedule, currently just option, but will have it built out next week.
				cout << "4. Automatic." << endl; //Tests two pointers with a particular template.
				cout << "Please enter an option, hit '0' to go back" << endl; //breaks to main menu.
				cin >> choice2;
				if (cin.fail()) {
					TV1.CheckInput(); continue;
				}
				else if (choice2 == 1) { //manual turn on/off
					TV1.Turn_On_Off();
					cout << TV1.get_Status() << endl;
				}
				else if (choice2 == 2) { //changes the channel
					TV1.change_channel(); continue;
				}
				else if (choice2 == 3) { //if it schoice 2.
					TV1.Edit_Schedule_Week(); continue;
				}
				else if (choice2 == 4) { //turns the tv to run automatically.
					TV1.set_autotime(*Ptr2, *Ptr1);
					cout << TV1.get_Status() << endl;
				}
				else if (choice2 < 0 || choice2  > 4) {
					cout << "Not a valid choice. " << endl; continue;
				}
				else if (choice2 == 0) { TV1.validInput1 = true; };
			} while (TV1.validInput1 == false); //if 0 is the selection returns to main menu. 
			continue;
		case VACUUMS: //manages vacuums
			do {
				Tron.validInput1 = false;
				cout << endl << "Manage Vacuums" << endl;
				cout << "1. Turn On/Off." << endl; //will give schedule setting options
				cout << "2. Set Schedule." << endl; //will allow manual control
				cout << "3. Automatic." << endl; //sets auto control
				cout << "Please enter an option, hit '0' to go back" << endl; // breaks to main menu.
				cin >> choice2;
				if (cin.fail()) { //validate input
					Tron.CheckInput(); continue;
				}
				else if (choice2 == 1) { // turns on off manually
					Tron.Turn_On_Off();
					cout << Tron.get_Status() << endl;
				}
				else if (choice2 == 2) { //edits the weekly schedule
					Tron.Edit_Schedule_Week();
				}
				else if (choice2 == 3) { //automatically sets them on if the time and day match.
					Tron.set_autotime(*Ptr2, *Ptr1);
					cout << Tron.get_Status() << endl;
				}
				else if (choice2 < 0 || choice2  > 3) {
					cout << "Not a valid choice. " << endl; continue;
				}
				else if (choice2 == 0) { Tron.validInput1 = true; }; //returns to main menu.
			} while (Tron.validInput1 == false);
			continue;
		case LIGHTS: //manages lights
			do {
				Lights1.validInput1 = false;
				cout << endl << "Manage Lights" << endl;
				cout << "1. Turn On/Off." << endl; //manual light control 
				cout << "2. Set Schedule." << endl; //sets light schedule
				cout << "3. Automatic." << endl; //sets to Automatic
				cout << "Please enter an option, hit '0' to go back" << endl; //breaks to main menu, may add schedule functionality to this.
				cin >> choice2;
				if (cin.fail()) { // checks input
					Lights1.CheckInput(); continue;
				}
				else if (choice2 == 1) { //turns lights on off.
					Lights1.Turn_On_Off();
					cout << Lights1.get_Status() << endl;
				}
				else if (choice2 == 2) { //sets the schedule for lights
					Lights1.Edit_Schedule_Week();
				}
				else if (choice2 == 3) { //turns lights on automatically if time and day match.
					Lights1.set_autotime(*Ptr2, *Ptr1);
					cout << Lights1.get_Status() << endl;
				}
				else if (choice2 < 0 || choice2  > 3) {
					cout << "Not a valid choice. " << endl; continue;
				}
				else if (choice2 == 0) { Lights1.validInput1 = true; }; //returns to main menu
			} while (Lights1.validInput1 == false);
			continue;
		case SECURITY: //manages security 
			do {
				Security1.validInput1 = false;
				cout << endl << "Manage Security" << endl;
				cout << "1. Turn On/Off." << endl; //manual control
				cout << "2. Set Schedule." << endl; //sets the schedule.
				cout << "3. Set Light Sensitivity." << endl; //sets the sensitivity.
				cout << "4. Automatic." << endl; //Sets to Automatic
				cout << "Please enter an option, hit '0' to go back" << endl; //breaks to main menu. 
				cin >> choice2;
				if (cin.fail()) { //checks for bad input
					Security1.CheckInput(); continue;
				}
				else if (choice2 == 1) { //turns the system on off manually
					Security1.Turn_On_Off();
					cout << Security1.get_Status() << endl;
				}
				else if (choice2 == 2) { //sets the schedule
					Security1.Edit_Schedule_Week();
				}
				else if (choice2 == 3) {//sets the motion sensitivity
					Security1.change_LightsSensitivity();
				}
				else if (choice2 == 4) {//sets the system on or off by the day and time. checking the schedule
					Security1.set_autotime(*Ptr2, *Ptr1);
					cout << Security1.get_Status() << endl;
				}
				else if (choice2 < 0 || choice2  > 4) {
					cout << "Not a valid choice. " << endl; continue;
				}
				else if (choice2 == 0) { Security1.validInput1 = true; }; //returns to the main menu.
			} while (Security1.validInput1 == false);
			continue;
		case SAVE: // will save the current settings to a text document. 
		{
			myfile.open("Settings.txt");

			myfile << "Security1: " << Security1.get_Status() << " " << Security1.get_Room() << " " << Security1.get_LightSensitivity() << endl; 
			//loops through and prints out the schedule. 
			for (int i = 0; i <= 6; i++) {
				myfile << Security1.PrintDay(i) << ", ";
			}
			myfile << endl;
			myfile << "Lights1: " << Lights1.get_Status() << " " << Lights1.get_Room() << endl;
			for (int i = 0; i <= 6; i++) {
				myfile << Lights1.PrintDay(i) << ", ";
			}
			myfile << endl;
			myfile << "Tron: " << Tron.get_Status() << " " << Tron.get_Room() << " " << endl;
			for (int i = 0; i <= 6; i++) {
				myfile << Tron.PrintDay(i) << ", ";
			}
			myfile << endl;
			myfile << "TV1: " << TV1.get_Status() << " " << TV1.get_Room() << " " << TV1.get_channel() << endl;
			for (int i = 0; i <= 6; i++) {
				myfile << TV1.PrintDay(i) << ", ";
			}
			myfile << endl;
			myfile << "Thermo1: " << Thermo1.get_Status() << " " << Thermo1.get_Room() << " " << Thermo1.get_Temp_Day() << " " << Thermo1.get_Temp_Eve() << endl;
			// may add saving the schedule. Will take a lot of typing, so I may get to it next week. 
			myfile.close();
			cout << "Successfully save settings." << endl;
		}continue;
		case END: exit(EXIT_SUCCESS);//ends the program on exit
		default: cerr << "Invalid Input!"//ends program if there is bad input. 
			<< endl;
			}break;
		
	} //ends program.
	return 0;
};
