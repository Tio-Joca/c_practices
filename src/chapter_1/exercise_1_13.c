/*
 * Write a program to print a histogram of the lengths of words in
 * its input.
 */

#include <stdio.h>

#define HISTOGRAM_LENGTH 40

int main()
{
    int index, counter, character, word_length, y_axis;
    int histogram[HISTOGRAM_LENGTH];

    word_length = 0;

    for (index = 0; index < HISTOGRAM_LENGTH; ++index)   {
        histogram[index] = 0;
    }

    while ((character = getchar()) != EOF)  {
        if (character == ' ' || character == '\n' || character == '\t') {
            if (word_length > 0)    {
                if (word_length > HISTOGRAM_LENGTH) {
                    ++histogram[HISTOGRAM_LENGTH - 1];
                }   else    {
                    ++histogram[--word_length];
                }
                word_length = 0;
            }
        }   else    {
            ++word_length;
        }
    }

    printf("Horizontal histogram of the length of words provided by input\n");

    for (index = 0; index < HISTOGRAM_LENGTH; ++index)   {
        printf("%3d ", (index + 1));
        for (counter = 1; counter <= histogram[index]; ++counter)   {
            putchar('*');
        }
        putchar('\n');
    }

    printf("Vertical histogram of the length of words provided by input\n");

    y_axis = 0;

    for (index = 0; index < HISTOGRAM_LENGTH; ++index)   {
        if (histogram[index] > y_axis)   {
            y_axis = histogram[index];
        }
    }

    while (y_axis >= 0)  {
        for (index = 0; index < HISTOGRAM_LENGTH; ++index)   {
            if (y_axis > 0) {
                if (histogram[index] >= y_axis) {
                    printf("%2c ", '*');
                }   else    {
                    printf("%2c ", ' ');
                }
            }   else {
                printf("%2d ", (index + 1));
            }
        }
        putchar('\n');
        --y_axis;
    }

    return 0;
}
