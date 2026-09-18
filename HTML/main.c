#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2;

    // Seed the random number generator using the current time
    // This ensures you get different numbers every time you run the program
    srand(time(NULL));

    // Range 1 to 6: (6 - 1 + 1) = 6
    num1 = (rand() % 6) + 1;

    // Range 7 to 12: (12 - 7 + 1) = 6
    num2 = (rand() % 6) + 7;

    // Print the results
    printf("First random number (1 to 6): %d\n", num1);
    printf("Second random number (7 to 12): %d\n", num2);
    getchar();

    return 0;
}

