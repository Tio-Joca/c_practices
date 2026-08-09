/*
 * Recreate the Fahrenheit to Celsius temperature converter
 * with a header above the table.
 */

#include <stdio.h>

int main()
{
    double celsius;
    int fahrenheit;

    fahrenheit = 0;

    printf("Fahrenheit - Celsius\n");

    while (fahrenheit <= 300)   {
        celsius = 5 * (fahrenheit - 32) / 9.0;
        printf("%10d   %7f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + 20;
    }

    return 0;
}
