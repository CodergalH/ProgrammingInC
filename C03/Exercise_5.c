// Original code is in README file
// Identified errors

//line 5 - int is written in blockcase
//line 6 - incorrect commenting
//line 7 - no semicolon at end of statement
//line 8 - same as line 6
//line 9 - no comma in printf


/* corrected code */
#include <stdio.h>

int main(void)
{
    int sum;

    /* COMPUTE RESULT */
    sum = 25 + 37 - 19;

    /* DISPLAY RESULTS */
    printf("The answer is %i\n", sum);

    return (0);
}