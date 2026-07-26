/*
PROGRAM: CHECK IF A NUMBER IS PERFECT NUMBER OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    int i;
    if (number > 0)
    {

        for (i = 1; i < number; i++)
        {
            if (number % i == 0)
            {
                sum = sum + i;
                number = number / i;
            }
        }
        if (sum == number)
        {
            printf("PERFECT NUMBER!!");
        }
        else
        {
            printf("NOT PERFECT NUMBER!!");
        }
    }
    else
    {
        printf("INVALID NUMBER!!");
    }
    return 0;
}