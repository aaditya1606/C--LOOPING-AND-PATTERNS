/*
PROGRAM: PRINT ALL THE PRIME NUMBERS BETWEEN 1 AND 100
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int i,divisors=0, j;
    for (i = 1; i <= 100; i++)
    {
        divisors=0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisors++;
            }
        }
        if (divisors<=2)
        {
            printf("%d ", i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}