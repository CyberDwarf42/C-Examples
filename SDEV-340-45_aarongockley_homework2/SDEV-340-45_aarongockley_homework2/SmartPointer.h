//Aaron Gockley
//11/10/2022
//SDEV-340-45_aarongockley_homework2
//Smart Pointer Class
#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

#include <iostream>
using namespace std;

class SmartPtr {
	double* Input; //I decided to base this off of the smart pointer given in lectures.

public:
	explicit SmartPtr(double* ptr = nullptr) { Input = ptr; } //I did some research and this is the base design of all smart pointers.
	~SmartPtr() { delete Input; } //This ensures a built in deconstructor rather than just deconstructing upon termination of the program.
	double& operator * () { return *Input; } //This sets up an actual output from this class. 
};
#endif // !SMARTPOINTER_H