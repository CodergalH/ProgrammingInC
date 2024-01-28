#include <stdio.h>

int main(void)
{
    float x;
    float poly;

    x = 2.55;
    poly = (3 * x * x * x) - (5 * x * x) + 6;

    printf("The result of polynonial: 3x^3 - 5x^2 + 6, where x = %.2f is equal to: %f\n", x, poly);
    
    return (0);
}