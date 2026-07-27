/*
PROGRAM: PRINT CUBES OF NUMBERS FROM 1 TO N
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int i;
    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i * i * i);
        }
    }
    else
    {
        printf("INVALID INPUT!!");
    }
    return 0;
}