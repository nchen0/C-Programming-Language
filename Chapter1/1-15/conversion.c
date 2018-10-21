#include <stdio.h>
int conversion(int f);

int main()
{
    printf("100 Fahrenheit in Celsius: %d\n", conversion(100));
    printf("200 Fahrenheit in Celsius: %d\n", conversion(200));
    return 0;
}

int conversion(int f)
{
    int c;
    c = 5 * (f - 32) / 9;
    return c;
}