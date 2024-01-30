// Program to reverse the digits of a number 

#include <stdio.h>

int main (void)
{
    int number, rn, right_digit, sum;

    printf ("Enter your number.\n");
    scanf ("%i", &number);
    rn = number;

    sum = 0;
    while ( number != 0 ) {
        right_digit = number % 10;
        sum += right_digit;
        number = number / 10;
    }

    printf ("The sum of digits of %i is %i\n", rn, sum);
    return 0;
}
