#include <stdio.h>

int main(void)
{
    int num;
    printf("How many triangle numbers do yo want to calculate?\nAnswer:");
    scanf("%d", &num);

    if(num >= 1)
        for (int n = 1, i; n <= num; n++)
        {
            int triangular_num;

            if(n == num)
                printf("Enter last number:");
            else
                printf("Enter number:");

            scanf("%i", &i);

            triangular_num = i * ((i + 1) / 2);
            printf("The triangular number of %i is %i\n", i, triangular_num);
        }
    return (0);
}