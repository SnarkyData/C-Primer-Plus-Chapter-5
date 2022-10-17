// Question 2, Chapter 5, C Primer Plus
//
// Assume all variables are of type int. 
// Find the value of each of the following
// variables:
//
// 	a. x = (int) 3.8 + 3.3;
//
// 	b. x = (2 + 3) * 10.5;
//
// 	c. x = 3 / 5 * 22.0;
//
// 	d. x = 22.0 * 3 / 5;

#include <stdio.h>

int main() {

	int x;

	x = (int) 3.8 + 3.3;
	printf("x = %d\n", x);

	x = (2 + 3) * 10.5;
	printf("x = %d\n", x);

	x = 3 / 5 * 22.0;
	printf("x = %d\n", x);

	x = 22.0 * 3 / 5;
	printf("x = %d\n", x);

	return 0;
}
