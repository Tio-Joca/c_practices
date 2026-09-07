/*
 * Rewrite the temperature conversion program of Section 1.2 to
 * use a function for conversion.
 */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

double fahrenheit_to_celsius(int fahrenheit);

int main()
{
    int fahrenheit;

    fahrenheit = LOWER;

    while (fahrenheit <= UPPER) {
        printf("%3d %6.1f\n", fahrenheit, fahrenheit_to_celsius(fahrenheit));
        fahrenheit = fahrenheit + STEP;
    }

    return 0;
}

double fahrenheit_to_celsius(int fahrenheit)
{
    double celsius;

    celsius = 5 * (fahrenheit - 32) / 9.0;

    return celsius;
}
