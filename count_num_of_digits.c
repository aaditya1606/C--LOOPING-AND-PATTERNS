/*
PROGRAM: COUNT THE NUMBER OF DIGITS IN A GIVEN NUMBER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int count = 0;
    if (number >= 0)
    {
        while (number > 0)
        {
            count++;
            number = number / 10;
        }
    }
    else
    {
        number = number * (-1);
        while (number > 0)
        {
            count++;
            number = number / 10;
        }
    }
    printf("Number of digits: %d", count);
    return 0;
}