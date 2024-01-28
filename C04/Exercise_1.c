#include <stdio.h>

int main(void)
{
    // Program 1
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    _Bool boolVar = 0;

    printf ("integerVar = %i\n", integerVar);
    printf ("floatingVar = %f\n", floatingVar);
    printf ("doubleVar = %e\n", doubleVar);
    printf ("doubleVar = %g\n", doubleVar);
    printf ("charVar = %c\n", charVar);
    printf ("boolVar = %i\n\n", boolVar);


    // Program 2
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    result = a - b; // subtraction
    printf ("a - b = %i\n", result);

    result = b * c; // multiplication
    printf ("b * c = %i\n", result);

    result = a / c; // division
    printf ("a / c = %i\n", result);

    result = a + b * c; // precedence
    printf ("a + b * c = %i\n", result);
    printf ("a * b + c * d = %i\n\n", a * b + c * d);
    
    
    // Program 3
    int a1 = 25;
    int b1 = 2;
    float c1 = 25.0;
    float d1 = 2.0;

    printf ("6 + a1 / 5 * b1 = %i\n", 6 + a1 / 5 * b1);
    printf ("a1 / b1 * b1 = %i\n", a1 / b1 * b1);
    printf ("c1 / d1 * d1 = %f\n", c1 / d1 * d1);
    printf ("-a1 = %i\n\n", -a1);
    

    // Program 4
    int a2 = 25, b2 = 5, c2 = 10, d2 = 7;

    printf ("a2 %% b2 = %i\n", a2 % b2);
    printf ("a2 %% c2 = %i\n", a2 % c2);
    printf ("a2 %% d2 = %i\n", a2 % d2);
    printf ("a2 / d2 * d2 + a2 %% d2 = %i\n\n",
    a2 / d2 * d2 + a2 % d2);
    

    // Program 5
    float f1 = 123.125, f2;
    int i1, i2 = -150;
    char c3 = 'a';

    i1 = f1; // floating to integer conversion
    printf ("%f assigned to an int produces %i\n", f1, i1);

    f1 = i2; // integer to floating conversion
    printf ("%i assigned to a float produces %f\n", i2, f1);

    f1 = i2 / 100; // integer divided by integer
    printf ("%i divided by 100 produces %f\n", i2, f1);
    
    f2 = i2 / 100.0; // integer divided by a float
    printf ("%i divided by 100.0 produces %f\n", i2, f2);

    f2 = (float) i2 / 100; // type cast operator
    printf ("(float) %i divided by 100 produces %f\n", i2, f2);
    
    return (0);
}