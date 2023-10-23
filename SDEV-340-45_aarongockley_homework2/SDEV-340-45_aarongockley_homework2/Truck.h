//Aaron Gockley
//11/10/2022
//SDEV-340-45_aarongockley_homework2
//Truck Class Header
#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"

class Truck : public Car {
protected:
	double MaxCargoSize;
	double MaxCargoWeight;
public:
	Truck(); //Blank Constructor for overload purposes
	Truck(string InputMake, string InputModel, int InputYear, double InputMaxSize, double InputMaxWeight, string InputHorn); //overloaded constructor

	void set_maxcargosize(double cs); // sets maximum cargo size
	double get_maxcargosize(); // gets the maximum cargo size
	void set_maxcargoweight(double cw); // sets max weight
	double get_maxcargoweight(); //gets max weight

	string VehicleInfo(); //overloaded function

};
#endif // !TRUCK_H

