//Aaron Gockley
//11/17/2022
//SDEV-340-45_aarongockley_homework3
//Employee Initializer

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee {

protected:
	string FirstName;
	string LastName;
	int Efficiency;
	string Notes;
	double Salary;

public:
	Employee(); //base constructor for overloading
	Employee(string InputFirst, string InputLast, int InputEfficiency, string InputNotes, double InputSalary); //overloaded constructor declared

	virtual ~Employee(); //virtual destructor
	
	virtual string getFirstName() const; //virtual get first name
	virtual string getLastName() const; //virtual get last name
	virtual int getEfficiency() const; //virtual get efficiency 
	virtual double getSalary() const; //virtual get salary

	virtual void PrintValues() const; //virtual print values
};
#endif // !EMPLOYEE_H
