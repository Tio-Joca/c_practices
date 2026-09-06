/*
 * How would you test the word count program? What kinds of input are
 * most likely to uncover bugs if there are any?
 */

/*
 * The possible bugs that could appear using this program are related
 * with usage of special characters by advanced users trying of put
 * some ASCII table characters that aren't accessible to most users.
 * These kinds of characters are escape sequences provided by C
 * programming language, but it isn't presented yet by K&R book.
 */

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;

    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)  {
        ++nc;

        if (c == '\n')  {
            ++nl;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if (state == OUT)  {
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}
