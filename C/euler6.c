#include <stdio.h>

// Project Euler: #6
// <byt3smith>

int squares[100] = {};
int square;
int elem;
int sumOfSq;
int sqOfSum;
int sum;
int diff;

int main()
{
	// For loop to build the squares array
	for (int num=1; num<101; num++) {
		square = num * num;
		squares[num] = square;
	}

	// For loop to add the elements of the squares array
	for (int e=1; e<101; e++) {
		elem = squares[e];
		sumOfSq += elem; 
	}
	printf("Final sum of squares = %d\n", sumOfSq);

	
	// For loop to find the square of the sum
	for (int num=1; num<101; num++) {
		sum += num;	
	}	
	sqOfSum = sum * sum;
	printf("Square of sum = %d\n", sqOfSum);
	
	diff = sqOfSum - sumOfSq;
	printf("Difference: %d\n", diff);

	return 0;
}


