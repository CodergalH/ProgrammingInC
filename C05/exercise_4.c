#include <stdio.h>

int main(void)
{
    printf("FACTORIAL TABLE\n");
    printf(" n      Factorial\n");
    printf("---    -----------\n");

    for (int n = 1; n <= 10; n++)
    {
        int fact = 1;
        for (int j = 1; j <= n; j++)
        {
            fact *= j;
        }
        
        printf("%.2d        %.7d\n", n, fact);
    }
    return (0);
}