//SDEV-340-45
//12/02/2022
//Aaron Gockley
//VacuumBot Declaration

#ifndef VACUUMBOT_H
#define VACUUMBOT_H

#include "device.h"
/*This whole class may change*/

class VacuumBot : public Device {

public:
	VacuumBot();
	VacuumBot( bool Input_Status, string Input_Room); //same as lights, has the same basic members as device. 

};
#endif // !VACUUMBOT_H
