//Aaron Gockley
//11/17/2022
//SDEV-340-45_aarongockley_homework3
//Manager Initializer


#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {

protected:
	string Title;
	string Department;

public:
	Manager(); // base constructor
	Manager(string InputFirst, string InputLast, int InputEfficiency, string InputNotes, double InputSalary, string InputTitle, string InputDepartment); //overloaded constructor
	
	virtual ~Manager(); //virtual destructor

	double getSalary() const override; //overloads the virtual
	int getEfficiency() const override; //overloads the virtual
	void PrintValues() const override; //overloadst the virtual
};
#endif // !MANAGER_H


