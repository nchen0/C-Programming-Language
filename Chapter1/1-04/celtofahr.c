#include <stdio.h>

main()
{
    float step, upper, lower;
    float fahr, celsius;
    lower = 0;
    upper = 100;
    step = 5;

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = celsius * 1.8 + 32;
        printf("%.0f\t %.1f\n", celsius, fahr);
        celsius += step;
    }
}