#include <stdio.h>

int main()
{
    int c, prev; // Include a previous counter, which is set to EOF so it doesn't match anything to begin with.
    prev = EOF;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            if (prev != ' ') // This means that if we had a space beforehand, we wouldn't print this space, since we only want 1 space.
                putchar(c);

        if (c != ' ')
            putchar(c); // If it's any other character, we can just print it.

        prev = c; // To eliminate spaces with the first if statement.
    }
}
