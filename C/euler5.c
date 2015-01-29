#include <stdio.h>

// main function to iter over 1-10;

int divby10 = 2520;
int i;
 
int main()
{
	for (i=1; i<11; i++) {
		double result = 2520 / i;
		printf( "%d divided by %d = %f\n", divby10, i, result);
	} 
	return 0;
}
