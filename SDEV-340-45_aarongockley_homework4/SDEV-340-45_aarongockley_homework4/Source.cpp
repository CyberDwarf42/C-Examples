//SDEV-340-45
//11/24/2022
//Aaron Gockley
//source file

#include "Template.h"; //includes the template.
#include <iostream>

using namespace std;

int main()
{
	cout << MyTemplate<int>(4, 5) << endl; //demonstration of int
	cout << MyTemplate<float>(5.3, 4.6) << endl; //demonstration of float
	cout << MyTemplate<double>(5.6789, 3.4569) << endl; //demonstration of double (very close to float)
	return 0;
}