#include <stdio.h>

int main(void)
{
    int i, j;
    int Next_multiple;
    
    i = 256;
    j = 7;
    Next_multiple = i + j - (i % j);
    printf("The next largest even multiple of %d after %d is %d\n\n", j, i, Next_multiple);

    i = 356;
    j = 7;
    Next_multiple = i + j - (i % j);
    printf("The next largest even multiple of %d after %d is %d\n\n", j, i, Next_multiple);

    i = 12258;
    j = 23;
    Next_multiple = i + j - (i % j);
    printf("The next largest even multiple of %d after %d is %d\n\n", j, i, Next_multiple);

    i = 996;
    j = 4;
    Next_multiple = i + j - (i % j);
    printf("The next largest even multiple of %d after %d is %d\n", j, i, Next_multiple);

    return (0);
}