/*
 * Write a program to count blanks, tabs and newlines.
 */

#include <stdio.h>

int main()
{
    int character;
    long blanks, tabs, newlines;

    blanks = tabs = newlines = 0;

    while ((character = getchar()) != EOF)  {
        if (character == ' ')   {
            ++blanks;
        }

        if (character == '\t')  {
            ++tabs;
        }

        if (character == '\n')  {
            ++newlines;
        }
    }

    printf("%ld %ld %ld\n", blanks, tabs, newlines);

    return 0;
}
