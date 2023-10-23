//SDEV-340-45
//12/02/2022
//Aaron Gockley
//Thermostat Declaration

#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include "device.h"

class Thermostat : public Device {
protected:
	float Temp_Day; //day temp
	float Temp_Evening; //evening temp
public:
	Thermostat(); //base constructor
	Thermostat(float Input_Temp_Day, float Input_Temp_Eve, bool InputStatus, string InputRoom); //Overloaded Constructor

	void set_Temp_Day(); //sets day temp
	float get_Temp_Day(); //gets day temp
	void set_Temp_Eve(); //sets eve temp
	float get_Temp_Eve(); //gets eve temp.



};
#endif // !THERMOSTAT_H
