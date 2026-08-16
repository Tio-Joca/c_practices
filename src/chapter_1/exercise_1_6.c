/*
 * Write a program that verifies if the evaluation of the
 * expression "getchar() != EOF" results in 0 or 1
 */

#include <stdio.h>

int main()
{
    int result;

    result = getchar() != EOF;

    printf("%d\n", result);

    return 0;
}
