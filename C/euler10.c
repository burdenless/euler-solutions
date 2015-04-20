//
//  euler10.c
//  Project Euler #10 - Summation of Primes
//
//  Developed by the Byt3smith on 4/19/15.
//

#include <stdio.h>

int cap = 2000000;
long sum = 0;

int main() {
  int current;
  for (current = 2; current < cap; current++) {
    int i, x;
    int counter = 0;
    for (i = 1; i*i<=current; i++) {
      if (current % i == 0 && i != current) {
        // Not prime
        counter += 1;
      }
    }
    if (counter > 1) {
    }
    else {
      sum += current;
    }
  }
  printf("[*] Sum of all primes below two million: %ld\n", sum);
}
