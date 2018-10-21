#include <stdio.h>
// getline: reads a line into s, returns the length of the line.
#define MAXLINE 1000

int s_getline(char line[], int maxline);
void reverse(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char reversed[MAXLINE];

    max = 0;
    while ((len = s_getline(line, MAXLINE)) > 0)
    {
        printf("\n%d: %s\n", len, line);
        max = len;
        reverse(reversed, line);
    }
    if (max > 0)
        printf("Reversed: %s\n", reversed);
    return 0;
}

int s_getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n' || c == '\t' || c == ' ')
    {
        i++;
    }
    s[i] = '\0';
    return i;
}

void reverse(char to[], char from[])
{
    int begin, end, i = 0;
    while (from[i] != '\0')
        i++;
    end = i - 1;
    for (begin = 0; begin < i; begin++)
    {
        to[begin] = from[end];
        end--;
    }
    to[begin] = '\0';
}