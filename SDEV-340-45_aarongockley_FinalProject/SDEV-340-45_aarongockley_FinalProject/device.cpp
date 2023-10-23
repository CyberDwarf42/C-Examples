//SDEV-340-45
//12/03/2022
//Aaron Gockley
//Device Implementation

#include "device.h"


Device::Device(){};
Device::Device(bool InputStatus, string InputRoom) { // base constructor
	
	Device::Status_On_Off = InputStatus;
	Device::Room_in_House = InputRoom;

};

void Device::set_Status(bool Status_info) { //sets the status.

	Device::Status_On_Off = Status_info;

};

bool Device::get_Status() { //gets the status.
	
	return Status_On_Off;

};

void Device::set_Room(string RoomInfo) { //sets the room, not really used

	Device::Room_in_House = RoomInfo;

};

string Device::get_Room() { //gets the room

	return Room_in_House;

};

void Device::set_Schedule_Week(int Input_StartTime1, int Input_EndTime1,int Input_StartTime2, int Input_EndTime2, 
	int Input_StartTime3, int Input_EndTime3,int Input_StartTime4, int Input_EndTime4,int Input_StartTime5, 
	int Input_EndTime5, int Input_StartTime6, int Input_EndTime6, int Input_StartTime7, int Input_EndTime7) {
	//Days are set as part of constructing the base struct array. Days can not be changed, only the times. 
	Device::Schedule_Week[0].DayofWeek = "Sunday";
	Device::Schedule_Week[0].StartTime = Input_StartTime1;
	Device::Schedule_Week[0].EndTime = Input_EndTime1;

	Device::Schedule_Week[1].DayofWeek = "Monday";
	Device::Schedule_Week[1].StartTime = Input_StartTime2;
	Device::Schedule_Week[1].EndTime = Input_EndTime2;

	Device::Schedule_Week[2].DayofWeek = "Tuesday";
	Device::Schedule_Week[2].StartTime = Input_StartTime3;
	Device::Schedule_Week[2].EndTime = Input_EndTime3;

	Device::Schedule_Week[3].DayofWeek = "Wednesday";
	Device::Schedule_Week[3].StartTime = Input_StartTime4;
	Device::Schedule_Week[3].EndTime = Input_EndTime4;

	Device::Schedule_Week[4].DayofWeek = "Thursday";
	Device::Schedule_Week[4].StartTime = Input_StartTime5;
	Device::Schedule_Week[4].EndTime = Input_EndTime5;

	Device::Schedule_Week[5].DayofWeek = "Friday";
	Device::Schedule_Week[5].StartTime = Input_StartTime6;
	Device::Schedule_Week[5].EndTime = Input_EndTime6;

	Device::Schedule_Week[6].DayofWeek = "Saturday";
	Device::Schedule_Week[6].StartTime = Input_StartTime7;
	Device::Schedule_Week[6].EndTime = Input_EndTime7;

};

void Device::Edit_Schedule_Day(string Alter_Day, int Start_time, int End_time) { //alters the time in a day. 
	for (int i = 0; i <= 6; i++) {
		if (Schedule_Week[i].DayofWeek == Alter_Day) {
			Schedule_Week[i].StartTime = Start_time;
			Schedule_Week[i].EndTime = End_time;
		}
	}
}

bool Device::check_time(int time_check) { //checks if the entered time is within the 24 hour clock thing I came up with. 
	if (time_check > 2359 || time_check < 0) {
		cout << "Not a correct time. Try again. " << endl;
		return false;
	}
}

void Device::Edit_Schedule_Week() {
	bool Correct_Input = false;
	string Day_to_alter;
	while (!Correct_Input) { //this will loop through until you get a correct input. 
		Correct_Input = true;
		cout << "Please enter the day you want to alter." << endl;//Takes in a day input.
		cin >> Day_to_alter;

		for (int i = 0; i <= 6; i++) { //checks to see if the day is in the struct array
			if (Schedule_Week[i].DayofWeek == Day_to_alter) {
				int start_time; int end_time; //base int for input
				do {
					validInput = false;
					cout << "Please enter start time in the form of 1000 for 10:00 AM." << endl; //gives the user a guideline for input.
					cin >> start_time; //takes start time input. will try to set up loop to check if it is in range
					if (cin.fail()) {
						CheckInput(); continue;

					}
					else if (check_time(start_time) == true) {
						do {
							cout << "Please enter end time in the same form." << endl;// takes end time.
							cin >> end_time; //ditto with start time.
							if (cin.fail()) {
								CheckInput(); continue;// same checker as is used in the menus. 
							}
							else if (check_time(start_time) == true) { //runs this block if check_time is true.
								Edit_Schedule_Day(Day_to_alter, start_time, end_time); //runs the Edit schedule day function.
								cout << "The new schedule is: " << Schedule_Week[i].DayofWeek << " from: " << Schedule_Week[i].StartTime << " to: " <<
									Schedule_Week[i].EndTime << endl;
								validInput = true;// outputs the new information.
							}
						} while (validInput == false); break;
					}
					else { break; }
				} while (validInput == false); break; //breaks if it breaks to this. 
			}
			else if (i == 7) {
				cout << "That is not a correct day." << endl; //moves back to main menu.
				Correct_Input = false;  continue;
			}

		}
	}
};


void Device::Turn_On_Off() { //checks if device is on, if it is on, it turns it off, if it is off turns it on.
	if (Device::Status_On_Off == 0) {

		Device::Status_On_Off = 1;
	
	}
	else {

		Device::Status_On_Off = 0;

	}
}

void Device::set_autotime(string Day_of_Week, int time_check) { //I looked into using actual date/time info, but it was more than I had time for.

	for (int i = 0; i <= 6; i++) { //loops through the week array
		if (Schedule_Week[i].DayofWeek == Day_of_Week) { 
			Device::set_Status(Comparison<int>(time_check, Schedule_Week[i].StartTime)); //if the day time fits the parameters, it sets the status to on.
		}

	}
}

bool Device::CheckInput() { //this function was something I found online when trying to figure out a way of handling bad input for selections. 
	cout << "Please enter a valid value.." << endl;
	cin.clear(); //reset state bits
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return false;
}; //reused heavily.

string Device::PrintDay(int Day_to_Print) { //This loops through and creates a string from each day's information.
	
	string Day = Device::Schedule_Week[Day_to_Print].DayofWeek;
	int Start_time = Device::Schedule_Week[Day_to_Print].StartTime;
	int End_Time = Device::Schedule_Week[Day_to_Print].EndTime;

	string Day_Info = Day + " " + to_string(Start_time) + " - " + to_string(End_Time);

	return Day_Info;
}


