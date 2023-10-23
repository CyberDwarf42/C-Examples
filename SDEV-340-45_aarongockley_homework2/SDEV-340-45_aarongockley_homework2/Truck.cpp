//Aaron Gockley
//11/10/2022
//SDEV-340-45_aarongockley_homework2
//Truck Class Implementer

#include "Truck.h"

Truck::Truck(){}; //Blank Constructor for overload purposes
Truck::Truck(string InputMake, string InputModel, int InputYear, double InputMaxSize, double InputMaxWeight, string InputHorn) : Car(InputMake, InputModel, InputYear, InputHorn) //overloaded constructor
{

	Truck::MaxCargoSize = InputMaxSize; // puts size in
	Truck::MaxCargoWeight = InputMaxWeight; // puts weight in

}

void Truck::set_maxcargosize(double cs)
{ // sets max size

	Truck::MaxCargoSize = cs;

}
double Truck::get_maxcargosize()
{ //gets max size

	return Truck::MaxCargoSize;

}
void Truck::set_maxcargoweight(double cw)
{//sets max size

	Truck::MaxCargoWeight = cw;

}
double Truck::get_maxcargoweight()
{//get max size

	return Truck::MaxCargoWeight;

}

string Truck::VehicleInfo()
{//overloaded vehicle function to_string is used as this particular function only returns strings, so I had to set it up to output strings. 
	
	return "This truck is " + Model + " its maximum cargo weight is " + to_string(MaxCargoWeight) +
		" pounds and its maximum cargo size is " + to_string(MaxCargoSize) + " cubic feet.";

}