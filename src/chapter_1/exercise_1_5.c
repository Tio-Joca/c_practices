/*
 * Modify the original temperature converter table
 * program to display the temperatures in inversed
 * order, higher to lower temperatures.
 */

/*
 * Introduction to usage of symbolic constants to
 * refactor the previous version of this program.
 */
#define UPPER 300
#define LOWER 0
#define STEP 20

#include <stdio.h>

int main()
{
    int fahrenheit;

    printf("Fahrenheit - Celsius\n");

    for (fahrenheit = UPPER; fahrenheit >= LOWER; fahrenheit = fahrenheit - STEP)   {
        printf("%10d   %7f\n", fahrenheit, (5 * (fahrenheit - 32) / 9.0));
    }

    return 0;
}
