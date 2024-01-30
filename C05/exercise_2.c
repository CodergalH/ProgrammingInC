#include <stdio.h>

int main(void)
{
    int n, nSqr;

    printf("TABLE SHOWING THE SQUARE OF NUMBERS\n");
    printf(" n       n²\n");
    printf("---    ------\n");

    for (n = 1; n <= 10; n++)
    {
        nSqr = n * n;
        printf(" %.2d       %.3d\n", n, nSqr);

    }

    return (0);
}