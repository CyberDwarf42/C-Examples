//Aaron Gockley
//11/17/2022
//SDEV-340-45_aarongockley_homework3
//Manager Implementation

#include "Manager.h"

Manager::Manager() {};
Manager::Manager(string InputFirst, string InputLast, int InputEfficiency, string InputNotes, double InputSalary, string InputTitle, string InputDepartment) :
	Employee(InputFirst, InputLast, InputEfficiency, InputNotes, InputSalary) { //overloads constructor to input info into Employee

	Title = InputTitle;
	Department = InputDepartment;

}

Manager::~Manager() { //deletes the manager and employee parts of the classes

	cout << "Deleting Manager.";

}

double Manager::getSalary() const { //overloads the virtual

	return Salary;

}

int Manager::getEfficiency() const { //overloads the virtual

	return Efficiency;

}

void Manager::PrintValues() const { //overloads the virtual. 

	cout << FirstName << " " << LastName << endl << Title << endl << Department << endl << "Efficiency rating : " << to_string(Efficiency) << endl
		<< "Notes: " << Notes << endl << "Salary: " << to_string(Salary) << endl;

}