/*
 * Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at time.
 */

#include <stdio.h>

#define MAX_STRING_LENGTH 1000

int get_line(char string[], int string_length);
void reverse(char string[], int string_length);
void print_string_properly(char string[], int string_length);

int main()
{
    int string_length;
    char string[MAX_STRING_LENGTH];

    while ((string_length = get_line(string, MAX_STRING_LENGTH)) > 0) {
        reverse(string, string_length);
        print_string_properly(string, string_length);
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

void reverse(char string[], int string_length)
{
    char character;
    int head, tail;

    head = 0;

    if (string_length < (MAX_STRING_LENGTH - 1)) {
        if (string[(string_length - 1)] == '\n') {
            tail = string_length - 2;
            --string_length;
        } else {
            tail = string_length - 1;
        }
    } else {
        string_length = MAX_STRING_LENGTH - 1;
        tail = string_length - 1;
    }

    while (head < (string_length / 2)) {
        character = string[head];
        string[head] = string[tail];
        string[tail] = character;
        ++head;
        --tail;
    }
}

void print_string_properly(char string[], int string_length)
{
    if (string_length < MAX_STRING_LENGTH) {
        printf("%s", string);
    } else if (string_length == MAX_STRING_LENGTH) {
        printf("%s\n", string);
    } else {
        printf("...%s\n", string);
    }
}
