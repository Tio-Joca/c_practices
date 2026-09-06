/*
 * Write a program to print a histogram of the frequencies of
 * different characters in its input.
 */

#include <stdio.h>

#define HISTOGRAM_LENGTH 95

int main()
{
    int index, counter, character;
    int histogram[HISTOGRAM_LENGTH];

    for (index = 0; index < HISTOGRAM_LENGTH; ++index) {
        histogram[index] = 0;
    }

    while ((character = getchar()) != EOF) {
        if (character >= ' ' && character <= '~') {
            ++histogram[character - 32];
        }
    }

    printf("Histogram of frequencies of different characters provided by input\n");

    for (index = 0; index < HISTOGRAM_LENGTH; ++index) {
        printf("%c - ", (index + 32));
        for (counter = 0; counter < histogram[index]; ++counter) {
            putchar('#');
        }
        putchar('\n');
    }

    return 0;
}
