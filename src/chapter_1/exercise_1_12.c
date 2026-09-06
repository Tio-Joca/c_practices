/*
 * Write a program thats prints its input one word per line
 */

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int character, state;

    state = OUT;

    while ((character = getchar()) != EOF)  {
        if (character == ' ' || character == '\n' || character == '\t') {
            if (state == IN)  {
                putchar('\n');
                state = OUT;
            }
        }
        else if (state == OUT)  {
            state = IN;
        }

        if (state == IN)    {
            putchar(character);
        }
    }

    return 0;
}
