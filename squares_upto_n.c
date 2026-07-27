/*
PROGRAM: PRINT THE SQUARES OF ALL NUMBERS FROM 1 TO N
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the n: ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i * i);
        }
    }
    else
    {
        printf("INVALID INPUT!!");
    }

    return 0;
}