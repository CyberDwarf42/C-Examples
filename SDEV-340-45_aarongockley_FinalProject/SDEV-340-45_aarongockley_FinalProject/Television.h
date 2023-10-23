//SDEV-340-45
//12/02/2022
//Aaron Gockley
//Television Declaration

#ifndef TELEVISION_H
#define TELEVISION_H

#include "device.h"

class Television : public Device {

protected:
	double channel = 0; //channel value
public:
	Television();// base constructor
	Television(double Input_channel, bool Input_Status, string Input_Room); //overloaded constructor

	void set_channel(double Input_channel); //sets the channel
	double get_channel(); //gets the channel.
	void change_channel();
	
};
#endif // !TELEVISION_H
