#include <stdio.h>

int main(void)
{
    int i, j, c, count;
    int arrlength[15];
    for (i = 0; i < 15; i++)
        arrlength[i] = 0;
    count = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
            count++;
        else
        {
            arrlength[count]++;
            count = 0;
        }
    }
    for (i = 0; i < 15; i++)
    {
        if (i < 10)
            printf("%d  |", i);
        if (i >= 10)
            printf("%d |", i);
        for (j = 0; j < arrlength[i]; j++)
            printf("*");
        printf("\n");
    }
}