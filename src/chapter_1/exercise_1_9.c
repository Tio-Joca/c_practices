/*
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a
 * single blank.
 */

#include <stdio.h>

int main()
{
    int actual_character;
    int previous_character;

    previous_character = -32;

    while ((actual_character = getchar()) != EOF)   {
        if (previous_character == ' ')  {
            if (actual_character != previous_character) {
                putchar(actual_character);
            }
        }
        if (previous_character != ' ')  {
            putchar(actual_character);
        }
        previous_character = actual_character;
    }

    return 0;
}
