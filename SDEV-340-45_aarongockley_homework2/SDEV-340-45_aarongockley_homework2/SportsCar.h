//Aaron Gockley
//11/10/2022
//SDEV-340-45_aarongockley_homework2
//Sports Car Header
#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class SportsCar : public Car {
protected:
	int TopSpeed;
	int Time_0_60;
public:
	SportsCar(); //Base Constructor
	SportsCar(string InputMake, string InputModel, int InputYear, int InputTopSpeed, int InputTime_0_60, string InputHorn);

	void set_topspeed(int ts);
	int get_topspeed();
	void set_time_0_60(int t60);
	int get_time_0_60();

	string VehicleInfo(); //overloaded function.
};
#endif // !SPORTSCAR_H
