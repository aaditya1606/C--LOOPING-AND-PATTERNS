/*
PROGRAM: CHECK IF A NUMBER IS PRIME OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int i, divisor;
    if (number == 1)
    {
        printf("NOT A PRIME!!");
    }
    else if (number > 1)
    {
        divisor = 0;
        for (i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                divisor++;
            }
        }
        if (divisor <= 2)
        {
            printf("PRIME!!");
        }
        else
        {
            printf("NOT PRIME!!");
        }
    }
    else
    {
        printf("INVALID INPUT!!");
    }
    return 0;
}