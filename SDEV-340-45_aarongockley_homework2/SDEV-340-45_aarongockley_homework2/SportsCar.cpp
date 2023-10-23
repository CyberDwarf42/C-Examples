//Aaron Gockley
//11/10/2022
//SDEV-340-45_aarongockley_homework2
//Sports Car Implementer

#include "SportsCar.h"

SportsCar::SportsCar() {}; //Base Constructor
SportsCar::SportsCar(string InputMake, string InputModel, int InputYear, int InputTopSpeed, int InputTime_0_60, string InputHorn) :Car(InputMake, InputModel, InputYear, InputHorn) 
{// this is the overloaded constructor. 

	SportsCar::TopSpeed = InputTopSpeed;
	SportsCar::Time_0_60 = InputTime_0_60;

};

void SportsCar::set_topspeed(int ts)
{//set topspeed.

	SportsCar::TopSpeed = ts;

};
int SportsCar::get_topspeed()
{//gets topspeed.

	return SportsCar::TopSpeed;

};
void SportsCar::set_time_0_60(int t60)
{//set time 0-60.

	SportsCar::Time_0_60 = t60;

};
int SportsCar::get_time_0_60()
{//gets time 0-60.
	
	return SportsCar::Time_0_60;

};

string SportsCar::VehicleInfo()
{//uses to_string to convert all the integers to strings, I could have changed the time 0-60 to a double, but decided to leave it. 

	return "This Car is a " + to_string(Year) + " " + Make + " " + Model + ", it goes 0-60 in " + to_string(Time_0_60) +
		" seconds and has a top speed of " + to_string(TopSpeed) + " miles per hour.";

};