#include <stdio.h>

int main(void)
{
    int farenheit, celcius;

    farenheit = 27;
    celcius = (farenheit - 32) / 1.8;

    printf("%d degree farenheit is %d degree in celcius\n", farenheit, celcius);

    return (0);
}