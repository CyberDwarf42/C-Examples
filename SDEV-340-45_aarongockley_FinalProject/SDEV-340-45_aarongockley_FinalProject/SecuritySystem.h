//SDEV-340-45
//12/02/2022
//Aaron Gockley
//SecuritySystem Declaration

#ifndef SECURITYSYSTEM_H
#define SECURITYSYSTEM_H

#include "device.h"

class SecuritySystem : public Device {
protected:
	int LightSensitivity;
public:
	SecuritySystem(); //basic constructor
	SecuritySystem(int Input_Sensitivity, bool Input_Status, string Input_Room); //overloaded constructor

	
	void set_LightSensitivity(int Input_Sensitivity); // sets sensitivity
	int get_LightSensitivity(); //gets sensitivity
	void change_LightsSensitivity(); //changes the sensitivity
	
};
#endif // !SECURITYSYSTEM_H
