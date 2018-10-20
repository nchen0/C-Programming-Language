#include <stdio.h>

main()
{
    long c;
    int nl = 0;
    int nb = 0;
    int nt = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            nl++;
        if (c == '\t')
            nt++;
        if (c == ' ')
            nb++;
    }
    printf("The total amount of newline, tab, and backspace counts:\n");
    printf("Newlines: %d\n", nl);
    printf("Blanks: %d\n", nb);
    printf("Tabs: %d\n", nt);
}