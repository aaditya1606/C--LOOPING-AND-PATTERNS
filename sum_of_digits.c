/*
PROGRAM: FIND THE SUM OF THE DIGITS OF A NUMBER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int i, digits, sum = 0;
    if (number >= 0)
    {
        for (i = number; i > 0; i = i / 10)
        {
            digits = i % 10;
            sum = sum + digits;
        }
    }
    else
    {
        number = number * -1;
        for (i = number; i > 0; i = i / 10)
        {
            digits = i % 10;
            sum = sum + digits;
        }
    }
    printf("SUM OF DIGITS OF %d: %d", number, sum);
    return 0;
}