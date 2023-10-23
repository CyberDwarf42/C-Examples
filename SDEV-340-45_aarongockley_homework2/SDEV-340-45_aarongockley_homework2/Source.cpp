//Aaron Gockley
//11/10/2022
//SDEV-340-45_aarongockley_homework2
//Source File

#include "Car.h"//includes all headers. 
#include "SportsCar.h"
#include "Truck.h"
#include "SmartPointer.h"
#include <iostream>
using namespace std;

int main() {
	string* ptr; //I decided to just set up a pointer to point to something random as there was not much need for a pointer in this program.
	string Pointee; //this creates a blank string to point the pointer to. 
	Truck Truck1("Dodge", "Ram", 2010, 80, 2000, "Obnoxious"); //overloaded constructor truck.
	Truck Truck2; //truck created to build using setters
	SportsCar Car1("Dodge", "Charger", 2019, 150, 10, "Feminine"); //overloaded sports car constructor.
	SportsCar Car2; //sports car created to build using setters
	
	double* cargo = new double(Truck1.get_maxcargosize()); //I could not think of a way to elegantly include a smart pointer in the requirements.
	SmartPtr hello = SmartPtr(cargo); //I created this pointer to output the maximum cargo size of truck 1.
	cout << "Truck 1's Max cargo size is " << *cargo << " cubic feet." << endl; //Here it is.

	Pointee = Truck1.get_make(); //loads the make of truck 1 into the pointee string.
	ptr = &Pointee; //pointer is pointing at the pointee.

	Truck2.set_make("Chevy");//the following lines use setters to set Truck2. 
	Truck2.set_model("Silverado");
	Truck2.set_year(2011);
	Truck2.set_maxcargosize(70);
	Truck2.set_maxcargoweight(1000);
	Truck2.set_horn("Quiet");

	Car2.set_make("Dodge");//the following lines use setters to set Car2
	Car2.set_model("Avenger");
	Car2.set_year(2010);
	Car2.set_topspeed(150);
	Car2.set_time_0_60(15);
	Car2.set_horn("Masculine");

	cout << HornInfo(Car2) << endl; //This demonstrates the Friend Function.
	cout << Truck1.VehicleInfo() << endl; //outputs the overloaded VehicleInfo() function in Truck.
	cout << Truck2.VehicleInfo() << endl;//same.
	cout << Car1.VehicleInfo() << endl;//outputs the overloaded VehicleInfo() function in Sports Car.
	cout << Car2.VehicleInfo() << endl;//same.
	cout << *ptr << endl;//dereferences the pointer from earlier. 

	


}