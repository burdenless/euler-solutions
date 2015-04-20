//
//  euler9.c
//  Project Euler #9 - Special Pythagorean Triplet
//
//  Developed by the Byt3smith on 4/18/15.
//

#include <stdio.h>
#include <math.h>

int main () {
  int sum = 1000;
  int a = 1;

  for (a; a < sum/3; a++) {
    int b;
    for (b = sum/3; b < sum/2; b++) {
      int c;
      for (c = sum/3; c < sum/2; c++) {
        if (a + b + c == 1000) {
          if (a*a + b*b == c*c) {
          printf("[+] Found Pythagorean Triplet: (%d, %d, %d)\n", a, b, c);
          printf("[*] Product == %d\n", a*b*c);
          }
        }
      }
    }
  }

  return 0;
}
