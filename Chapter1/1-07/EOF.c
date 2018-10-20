#include <stdio.h>

main()
{
    printf("Press a CTRL-Z (Windows) or CTRL-D (unix-style systems) to see the value of EOF");
    printf("The value of EOF is: %d\n", getchar());
    return 0;
}