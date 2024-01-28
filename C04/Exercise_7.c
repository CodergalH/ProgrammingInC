#include <stdio.h>

int main(void)
{
    float a = 3.31e-8;
    float b = 2.01e-7;
    float c = 7.16e-6;
    float d = 2.01e-8;

    float value1 = a * b;
    float value2 = c + d;
    float result = value1 / value2;

    printf("The result of the expression : (%.2e x %.2e) / (%.2e + %.2e), is equal to %.2e", a, b, c, d, result);

    return (0);
}