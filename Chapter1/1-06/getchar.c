#include <stdio.h>

main()
{
    printf("press a key. \n\n");
    printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);
    return 0; // return 0 is like a success status "The program worked fine."
}