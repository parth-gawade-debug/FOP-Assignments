// This program is to generate pseudo random numbers.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0)); // Seed the random number generator with the current time.
    // if we would have used just srand(), then it would have generated same sequence of random numbers evry time.
    int random = (rand()%1000); // Generate a random number according to it (less than RAND_MAX).
    printf("Random number is : %d\n", random);
    return 0;
}