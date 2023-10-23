//Aaron Gockley
//11/17/2022
//SDEV-340-45_aarongockley_homework3
//Source File

#include "Manager.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> Vector1; //uses vector from the standard template library.
	for (int i = 1; i <= 4; i++) //accidentally created an infinite loop at first, it now works properly.
		Vector1.push_back(i);

	Employee Employee1("Aaron", "Gockley", 4, "mime", 30000); //creates employee
	Manager Manager1("Jon", "Showalter", 5, "Average Height", 40000, "Manager", "Wholesale"); //creates manager

	Employee1.PrintValues(); //demonstrates printvalues on employee
	cout << Employee1.getEfficiency() << endl; //demonstrates virtual function
	cout << Employee1.getFirstName() << endl; //demonstrates virtual function
	cout << Employee1.getLastName() << endl; //demonstrates virtual function
	cout << Employee1.getSalary() << endl << endl; //demonstrates virtual function

	Manager1.PrintValues(); //demonstrates overloaded function
	cout << Manager1.getEfficiency() << endl; //demonstrates overloaded virtual function
	cout << Manager1.getSalary() << endl; //demonstrates overloaded virtual function

	cout << "Output of Vector1 "; //outputs the vector
	for (auto i = Vector1.begin(); i != Vector1.end(); i++) //uses an iterator over vector from the standard template library. 
		cout << *i << " ";
	cout << endl;
}
