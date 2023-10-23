//Aaron Gockley
//11/10/2022
//SDEV-340-45_aarongockley_homework2
//Car Class Header
#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
using namespace std;

class Car {
protected:
	string Make; //stores Make
	string Model; //stores Model
	int Year = 0; //stores Year
	string HornDescription;

public:
	Car(); //Base constructor
	Car(string InputMake, string InputModel, int InputYear, string InputHorn); //The constructor that will be overloading all others.

	void set_make(string mk); //set make
	string get_make(); //get make
	void set_model(string ml); //set model
	string get_model(); //get model
	void set_year(int yr); //set year
	int get_year(); //get year
	void set_horn(string hn); //set horndescripton
	string get_horn(); //get horndescription

	string VehicleInfo(); //This is the function that will be overloaded in all other functions.
	friend string HornInfo(Car c); //Friend function to display the Horn Description.
};
#endif // !CAR_H
