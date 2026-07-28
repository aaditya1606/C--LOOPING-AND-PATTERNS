/*
PROGRAM: PRINT ALL THE FACTORS OF A GIVEN NUMBER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("ENTER THE NUMBER:");
    scanf("%d", &number);
    if (number > 0)
    {
        int i;
        for (i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                printf("%d ", i);
            }
        }
    }
    else
    {
        printf("ENTER A POSITIVE NUMBER!");
    }
    return 0;
}