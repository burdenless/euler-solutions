// Project Euler: #2
// <byt3smith>

#include <stdio.h>

/*
Function to run through the Fibonacci sequence and sum up the even numbers
*/

int main() {
	int x = 1;
	int y = 0;
	int z;
	int counter = 0;
	int xarray[33];
	int sum = 0;

	while (x < 4000000) {
		xarray[counter] = x;
		z = x;
		x += y;
		y = z;
		counter++;
	}

	printf( "value of x is: %d\n", x);
	printf( "counter = %d\n", counter);

	int curvar = 0;
	int xvar;

	for (int i = 0; i < counter; i++) {
		xvar = xarray[i];
   		if (xvar % 2 == 0) {
			sum += xvar;
			printf("Even number found: %d\n", xvar);
		}
	}

	printf("Sum of even numbers = %d\n", sum);
	return 0;
}
