/*
 * Write a program to remove trailing blanks and tabs from each line
 * of input, and to delete entirely blank lines.
 */

#include <stdio.h>

#define MAX_STRING_LENGTH 1000

int get_line(char string[], int max_string_length);
int trim(char string[], int string_length);
void print_string_properly(char string[], int string_length);

int main()
{
    int string_length;
    char string[MAX_STRING_LENGTH];

    while ((string_length = get_line(string, MAX_STRING_LENGTH)) > 0) {
        string_length = trim(string, string_length);
        if (string[0] != '\n') {
            print_string_properly(string, string_length);
        }
    }

    return 0;
}

int get_line(char string[], int string_length)
{
    int counter, character;

    counter = 0;

    while ((character = getchar()) != EOF && character != '\n') {
        if (counter < (string_length - 1)) {
            string[counter] = character;
        }
        ++counter;
    }

    if (counter < (string_length - 1)) {
        if (character == '\n') {
            string[counter] = character;
            ++counter;
        }
        string[counter] = '\0';
    } else {
        string[(string_length - 1)] = '\0';
        ++counter;
    }

    return counter;
}

int trim(char string[], int string_length)
{
    int index;

    if (string_length < (MAX_STRING_LENGTH - 1)) {
        index = string_length - 1;

        while ((index > 0) && (string[(index - 1)] == ' ' || string[(index - 1)] == '\t')) {
            string[(index - 1)] = string[index];
            string[index] = string[(index + 1)];
            --index;
            --string_length;
        }
    }

    return string_length;
}

void print_string_properly(char string[], int string_length)
{
    if (string_length < MAX_STRING_LENGTH) {
        printf("%s", string);
    } else if (string_length == MAX_STRING_LENGTH) {
        printf("%s\n", string);
    } else {
        printf("%s...\n", string);
    }
}
