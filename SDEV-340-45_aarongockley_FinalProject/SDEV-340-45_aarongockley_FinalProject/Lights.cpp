//SDEV-340-45
//12/03/2022
//Aaron Gockley
//Lights Implementation

#include "Lights.h"

Lights::Lights() {};
Lights::Lights(bool Input_Status, string Input_Room) : Device(Input_Status, Input_Room){}; //has no unique members, but is created separately. 