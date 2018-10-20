#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    int fahr, celsius;

    fahr = UPPER;
    printf("----------------------Fahrenheit to Celcius---------------------\n");
    while (fahr >= LOWER)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%d\n", fahr, celsius);
        fahr = fahr - STEP;
    }
}