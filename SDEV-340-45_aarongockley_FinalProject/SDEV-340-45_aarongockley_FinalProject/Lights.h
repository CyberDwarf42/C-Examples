//SDEV-340-45
//12/02/2022
//Aaron Gockley
//Lights Declaration

#ifndef LIGHTS_H
#define LIGHTS_H

#include "device.h"

class Lights : public Device {
public:
	Lights();// base constructor
	Lights(bool Input_Status, string Input_Room); //overloaded constructor, Lights are practically the same as device. 
};

#endif // !LIGHTS_H
