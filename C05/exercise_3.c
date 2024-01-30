#include <stdio.h>

int main(void)
{
    int triangular_num;

    printf("TABLE OF TRIANGULAR NUMBERS\n");
    printf(" n      Triangular number\n");
    printf("---    -------------------\n");

    for (int n = 5; n <= 50; n++)
    {
        triangular_num = n * ((n + 1) / 2);
        if(n % 5 == 0)
        printf(" %.2d           %.4d\n", n, triangular_num);
    }
    return (0);
}