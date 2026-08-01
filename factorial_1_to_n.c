/*
PROGRAM: PRINT FACTORIAL OF EACH NUMBER FROM 1 TO N
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the N: ");
    scanf("%d", &n);
    int i;
    if (n > 0)
    {
        int factorial = 1;
        for (i = 1; i <= n; i++)
        {
            factorial = 1;
            int j;
            for (j = 1; j <= i; j++)
            {
                factorial = factorial * j;
            }
            printf("FACTORIAL OF %d: %d\n", i, factorial);
        }
    }
    else if (n == 0)
    {
        printf("%d", 1);
    }
    else
    {
        printf("ENTER A VALID NUMBER!!");
    }
    return 0;
}