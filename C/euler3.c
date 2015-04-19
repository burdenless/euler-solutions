// Project Euler: #3
// <byt3smith>

#include <stdio.h>
#include <math.h>

int main () {
	double num = 600851475143;

	printf("Init Num: %f\n", num);
	double factor;
	double item;

	for (int i = 2; i < 100000; i++) {
		factor = num/i;
		if (floorf(factor) == factor) {
			printf("found factor: %f * %d\n", factor, i);
			item = factor;
		}
	}

        for (int i = 2; i < 1000000; i++) {
                double prime = item/i;
                if (floorf(prime) == prime) {
                        printf("found primal factor: %f * %d\n", prime, i);
                }
        }


	return 0;
}
