//SDEV-340-45
//12/02/2022
//Aaron Gockley
//Device Declaration

#ifndef DEVICE_H
#define DEVICE_H

#include "Template.h"
#include <iostream>
#include <string>

using namespace std;

class Device {

protected:
	bool Status_On_Off = false; //starts as false, false = off, true = on
	string Room_in_House; //room in house
	
	struct Schedule_Day { //schedule struct stores day of week and start and end time. 
		string DayofWeek;
		int StartTime = 0;
		int EndTime = 0;
	};
	
public:
	Schedule_Day Schedule_Week[7]; //creates array of structs
	Device(); //base constructor
	Device(bool InputStatus, string InputRoom); //overloaded constructor
	bool validInput = true;
	bool validInput1 = true;

	void set_Schedule_Week(int Input_StartTime1, int Input_EndTime1, int Input_StartTime2, int Input_EndTime2,int Input_StartTime3, int Input_EndTime3, 
		int Input_StartTime4, int Input_EndTime4, int Input_StartTime5, int Input_EndTime5, int Input_StartTime, int Input_EndTime6,
		int Input_StartTime7, int Input_EndTime7); //this will only be used to set struct array.
	//will add fucntion to alter specific day times.
	void set_Status(bool StatusInfo); //sets the on/off status
	bool get_Status(); //gets the status
	void set_Room(string RoomInfo); //sets the room
	string get_Room(); //gets the room.

	void Edit_Schedule_Day(string Alter_Day, int Start_time, int End_time); //edits schedule day.
	void Edit_Schedule_Week();// edits the schedule week
	void Turn_On_Off(); //turns device on or off.
	void set_autotime(string Day_of_Week, int time_check); //sets the status based on day and time. 
	bool CheckInput(); //checks the input.
	bool check_time(int time_check); //checks time
	string PrintDay(int Day_to_Print); //loops through the days
};
#endif // !DEVICE_H
