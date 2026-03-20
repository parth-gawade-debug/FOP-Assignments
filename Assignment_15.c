// This program is to generate pseudo random numbers.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0)); // Seed the random number generator with the current time.
    // if we would have used just srand(), then it would have generated same sequence of random numbers evry time.
    int random = rand() %100 +1; // Generate a random number between 1 and 100.
    printf("Random number between 1 and 100: %d\n", random);
    return 0;
}