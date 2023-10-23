//SDEV-340-45
//12/02/2022
//Aaron Gockley
//Television Implementation

#include "Television.h"

Television::Television(){};
Television::Television(double Input_channel, bool Input_Status, string Input_Room) : Device(Input_Status, Input_Room) { //constructor

	Television::channel = Input_channel; //this sets the initial channel

};

void Television::set_channel(double Input_channel) { //changes the channel

	Television::channel = Input_channel;

};
double Television::get_channel() {

	return channel; //gets the new channel.

};

void Television::change_channel() {
	double New_Channel;
	do {
		validInput = true;
		cout << "Please enter new channel: " << endl; //prompts new channel input
		cin >> New_Channel; //possibly check new_channel within parameter? Particularly check that no string or character is 
		if (cin.fail()) {
			validInput = CheckInput();
		}
		else {
			set_channel(New_Channel);
			cout << "The channel has changed to: " << get_channel() << endl; //tells the user what the new channel is.
		} continue;
	} while (validInput == false);
};