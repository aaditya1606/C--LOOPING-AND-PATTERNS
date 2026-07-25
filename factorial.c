/*
PROGRAM: PRINT THE FACTORIAL OF A GIVEN NUMBER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int i, multiply = 1;
    if (n == 0)
    {
        printf("FACTORIAL: %d", multiply);
    }
    else if (n > 0)
    {
        for (i = n; i > 0; i--)
        {
            multiply = multiply * i;
        }
        printf("FACTORIAL: %d", multiply);
    }
    else
    {
        printf("NOT DEFINED!");
    }
    return 0;
}