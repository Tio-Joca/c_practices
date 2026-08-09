/*
 * Modify the original temperature converter table
 * program to display the temperatures in inversed
 * order, higher to lower temperatures.
 */

#include <stdio.h>

int main()
{
    int fahrenheit;

    printf("Fahrenheit - Celsius\n");

    for (fahrenheit = 300; fahrenheit >= 0; fahrenheit = fahrenheit - 20)   {
        printf("%10d   %7f\n", fahrenheit, (5 * (fahrenheit - 32) / 9.0));
    }

    return 0;
}
