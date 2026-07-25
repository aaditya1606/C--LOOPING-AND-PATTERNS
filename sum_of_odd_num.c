/*
PROGRAM: PRINT THE SUM OF ALL ODD NATURAL NUMBERS UPTO N
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int i, sum = 0;
    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                sum = sum + i;
            }
        }
        printf("SUM: %d", sum);
    }
    else
    {
        printf("INVALID INPUT!");
    }
    return 0;
}