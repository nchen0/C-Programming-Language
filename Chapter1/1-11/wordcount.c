#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nw, nc, state;
    nw = nc = state = 0;
    while ((c = getchar() != EOF))
    {
        ++nc;
        if (c == '\n' || c == ' ' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            nw++;
        }
    }
    printf("Number of characters: %d\nNumber of word characters: %d\n", nc, nw);
}