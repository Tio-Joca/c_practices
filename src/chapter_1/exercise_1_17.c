/*
 * Write a program to print all input lines that are longer than
 * 80 characters.
 */

#include <stdio.h>

#define MAX_STRING_LENGTH 1000
#define MINIMUM_STRING_LENGTH_FOR_PRINT 80

int get_line(char string[], int max_string_length);
void print_string_properly(char string[], int string_length);

int main()
{
    int string_length;
    char string[MAX_STRING_LENGTH];

    while ((string_length = get_line(string, MAX_STRING_LENGTH)) > 0) {
        if (string_length > MINIMUM_STRING_LENGTH_FOR_PRINT) {
            print_string_properly(string, string_length);
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
        string[max_string_length - 1] = '\0';
        ++counter;
    }

    return counter;
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
