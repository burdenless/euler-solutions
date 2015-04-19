//
//  euler8.c
//  Project Euler
//
//  Developed by the Byt3smith on 3/29/15.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char adjacents[1000][1000] = {};
char temp;
char * temp13digs;
char digits[] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
long bigprod;

long getnums() { // Parses the 1000-digit number for largest series
    int adjcount = 0;

    // Take input and parse out the 13-digit series with a specific first digit.
    for (int i=0; i < 1000; i++) {
        // Identify current digit
        char * currpos = digits+i;
        // Compare to initial digit and find 12 adjacent chars
        // Ideally you would iterate over a list of chars to check all digits, but this way was quick and easy
        if (strncmp(currpos, "5", 1) == 0 || strncmp(currpos, "4", 1) == 0) {
            temp13digs = strndup(digits+i, 13);

            // Add full 13-char string to array and print
            strcpy(adjacents[adjcount], temp13digs);

            // Increment adjacent index
            adjcount++;

        }
        else {
            // Do nothing;
        }
    }

    printf("[*] Found %d 13-digit strings\n\n", adjcount);

    for (int i=0; i < 201; i++) {
        long prod = 1;
        long newprod = 1;

        //printf("String: %s\n", adjacents[i]);

        for (int y = 0; y < 13; y++) {

            // Get each char from 13-digit strings and convert to int
            char adjchar = adjacents[i][y];
            int newnum = adjchar - '0';

            // Perform multiplication of newprod and newnum
            newprod = newnum * newprod;
            prod = newnum;
        }
        // printf("Product: %ld\n\n", newprod);
        if (newprod > bigprod) {
          //printf("%ld is bigger than %ld\n\n", newprod, bigprod);
          bigprod = newprod;
        }
        else {
          // Do nothing
        }
    }

    return bigprod;
}

int main() {
    printf("\n\n[+] Parsing 1000-digit number..\n");
    printf("\n[*] Largest product found: %ld\n", getnums());

    return 0;
}
