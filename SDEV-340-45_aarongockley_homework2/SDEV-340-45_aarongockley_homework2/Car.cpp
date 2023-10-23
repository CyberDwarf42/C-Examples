//Aaron Gockley
//11/10/2022
//SDEV-340-45_aarongockley_homework2
//Car Class Implementer

#include "Car.h"

Car::Car(){}; //default constructor

Car::Car(string InputMake, string InputModel, int InputYear, string InputHorn) 
{ //overloaded constructor
	Car::Make = InputMake;
	Car::Model = InputModel;
	Car::Year = InputYear;
	Car::HornDescription = InputHorn;
}

void Car::set_make(string mk) 
{

	Car::Make = mk;

} //set make
string Car::get_make() 
{

	return Car::Make;

} //get make
void Car::set_model(string ml) 
{

	Car::Model = ml;

} //set model
string Car::get_model() 
{

	return Car::Model;

} //get model
void Car::set_year(int yr) 
{

	Car::Year = yr;

} //set year
int Car::get_year() 
{

	return Car::Year;

} //get year
void Car::set_horn(string hn) 
{

	Car::HornDescription = hn;

} //set horndescripton
string Car::get_horn() 
{

	return Car::HornDescription;

} //get horndescription

string Car::VehicleInfo() 
{

	return "This Car is a " + to_string(Year) + " " + Make + " " + Model;

}; //This is the function that will be overloaded in all other functions.

string HornInfo(Car c) 
{

	return c.HornDescription;

} //Friend function to display the Horn Description.