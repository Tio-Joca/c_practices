/*
 * Revise the main routine of the longest-line program so it will
 * correctly print the length of arbitrarily long input lines, and
 * as much as possible of the text.
 */

#include <stdio.h>

#define MAX_STRING_LENGTH 10

int get_line(char string[], int max_string_length);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char string[MAX_STRING_LENGTH];
    char longest_string[MAX_STRING_LENGTH];

    max = 0;

    while ((len = get_line(string, MAX_STRING_LENGTH)) > 0) {
        if (len > max) {
            max = len;
            copy(longest_string, string);
        }
    }

    if (max > 0) {
        if (max < MAX_STRING_LENGTH) {
            printf("%d - %s", max, longest_string);
        } else if (max == MAX_STRING_LENGTH) {
            printf("%d - %s\n", max, longest_string);
        } else {
            printf("%d - %s...\n", max, longest_string);
        }
    }

    return 0;
}

int get_line(char string[], int max_string_length)
{
    int counter, character;

    counter = 0;

    while ((character = getchar()) != EOF && character != '\n') {
        if (counter < (max_string_length - 1)) {
            string[counter] = character;
        }
        ++counter;
    }

    if (counter < (max_string_length - 1)) {
        if (character == '\n') {
            string[counter] = character;
            ++counter;
        }

        string[counter] = '\0';
    } else {
        string[(max_string_length - 1)] = '\0';
        ++counter;
    }

    return counter;
}

void copy(char to[], char from[])
{
    int index;

    index = 0;

    while ((to[index] = from[index]) != '\0') {
        ++index;
    }
}
