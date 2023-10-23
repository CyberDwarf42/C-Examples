//Aaron Gockley
//11/06/2022
//SDEV-340-45-homework1
//Implememntation of Math functions
#include <iostream>
#include <string>
#include <cmath>
#ifndef MathHeader
#include "Math.h"
#endif // !MathHeader
using namespace std;

float Math::Average() {
	float numerator = 0;
	float average = 0;
	float denominator = sizeof(scores) / sizeof(scores[0]); //makes denominator by dividing size of scores by the first size of scores[]
	for (int i = 0; i < 7; i++) {
		numerator = numerator + scores[i]; //uses loop to add up all the scores
	}
	average = numerator / denominator; // divides the scores by the denominator.
	return average; //returns average. 
}
float Math::Deviance(){ //originally tried to create an array. It did not work. 
	float deviance = 0; //creates temp variable.
	for (int j = 0; j < 7; j++) { // created a program similar to average.
		float score = scores[j] - Average(); //subtracts the average from the score.
		deviance = deviance + pow(score, 2); //squares the difference. 
	}
	return deviance;
}
float Math::Variance() {
	float variance = 0; //creates temp variable.
	float denominator = sizeof(scores) / sizeof(scores[0]); //identical to how it is done in average.
	variance = Deviance() / denominator; //divides the deviance by the denominator.
	return variance;
}
float Math::Deviation() {
	float deviation = sqrt(Variance()); //gets the square root of the variance. 
	return deviation;
}