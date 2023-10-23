//SDEV-340-45
//12/02/2022
//Aaron Gockley
//Template Initializers

#ifndef TEMPLATE_T
#define TEMPLATE_T
template <typename t>
t Comparison(t x, t y)
{
	
	if (x > y) { // this will compare two numbers

		return true; //if x is greater than y, it will return true.

	}
	else {

		return false; //else it will return false.

	};
}
#endif //TEMPLATE_T
