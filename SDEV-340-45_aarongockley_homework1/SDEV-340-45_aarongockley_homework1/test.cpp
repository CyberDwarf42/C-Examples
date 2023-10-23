#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int scores[6] = { 10, 20, 30, 40, 50, 60 };
	cout << scores[5] << endl;
	float numerator = 0;
	float average = 0;
	float denominator = sizeof(scores) / sizeof(scores[0]);
	for (int* p = scores; p != end(scores); ++p) {
		numerator = numerator + *p;
	}
	average = numerator / denominator;
	float* l = &average;
	cout << *l << endl;

	float deviance[6]{}; {
		for (int i = 0; i < 6; i++) {
			float score = scores[i] - *l;
			deviance[i] = pow(score, 2);
			cout << scores[i] << endl << endl;
			cout << deviance[i] << endl<< endl;
		}
		for (int k = 0; k < 6; k++) {
			cout << deviance[k] << endl;
		}
	}
	float numerator1 = 0;
	float variance = 0;
	for (float* j = deviance; j != end(deviance); ++j) {
		numerator1 = numerator1 + *j;
		cout << numerator1 << endl;
	}
	variance = numerator1 / denominator;
	cout << variance << endl;
	
	float deviation = sqrt(variance);
	cout << deviation << endl;
}