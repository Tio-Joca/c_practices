/*
 * Create a program that creates a Celsius to Fahrenheit
 * conversion table, from zero to 300 Celsius degrees.
 * The table needs to increase by steps of 20.
 */

#include <stdio.h>

int main()
{
    int celsius;
    double fahrenheit;

    printf("Celsius - Fahrenheit\n");

    celsius = 0;

    while (celsius <= 300)  {
        fahrenheit = 9 * celsius / 5.0 + 32;
        printf("%7d   %10f\n", celsius, fahrenheit);
        celsius = celsius + 20;
    }

    return 0;
}
