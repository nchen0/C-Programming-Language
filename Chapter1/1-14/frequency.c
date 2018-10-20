#include <stdio.h>

int main(void)
{
    int i, j, c;
    int arrlength[26];
    for (i = 0; i < 26; i++)
        arrlength[i] = 0;
    while ((c = getchar()) != EOF)
    {
        if (c >= 97 && c <= 122)
            arrlength[c - 97]++;
        else
            continue;
    }

    for (i = 0; i < 26; i++)
    {
        printf("%c  |", i + 97);
        for (j = 0; j < arrlength[i]; j++)
            printf("*");
        printf("\n");
    }
}