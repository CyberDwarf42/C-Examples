//Aaron Gockley
//11/17/2022
//SDEV-340-45_aarongockley_homework3
//Employee Implementation

#include "Employee.h"

Employee::Employee() {};
Employee::Employee(string InputFirst, string InputLast, int InputEfficiency, string InputNotes, double InputSalary) { //overloaded constructor

	FirstName = InputFirst;
	LastName = InputLast;
	Efficiency = InputEfficiency;
	Notes = InputNotes;
	Salary = InputSalary;

}
Employee::~Employee() { //implements the virtual destructor
	
	cout << "Deleting Employee.";

}

string Employee::getFirstName() const { //implements getFirstName

	return FirstName;

}

string Employee::getLastName() const { //implements getLastName

	return LastName;

}

int Employee::getEfficiency() const { //implements getEfficiency

	return Efficiency;

}

double Employee::getSalary() const { //implements getSalary

	return Salary;

}

void Employee::PrintValues() const { //implements print values, while this is not outputting a string, I decided to use to_string, just to make sure there were no errors in printing. 

	cout << FirstName << " " << LastName << endl << "Efficiency rating : " << to_string(Efficiency) << endl
		<< "Notes: " << Notes << endl << "Salary: " << to_string(Salary) << endl;
}