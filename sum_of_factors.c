/*
PROGRAM: FIND THE SUM OF ALL THE FACTORS OF A GIVEN NUMBER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &number);
    if (number > 0)
    {
        int i, sum = 0;
        for (i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                sum = sum + i;
            }
        }
        printf("SUM OF ALL THE FACTORS: %d", sum);
    }
    else
    {
        printf("ENTER A POSITIVE NUMBER!");
    }
}