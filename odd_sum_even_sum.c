/*
PROGRAM: PRINT THE SUM OF ALL ODD DIGITS AND EVEN DIGITS SEPARATELY IN A NUMBER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number, temp;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &number);
    temp = number;
    int evensum = 0, oddsum = 0;
    while (temp > 0)
    {
        int digit;
        digit = temp % 10;
        if (digit % 2 == 0)
        {
            evensum = evensum + digit;
        }
        else
        {
            oddsum = oddsum + digit;
        }
        temp = temp / 10;
    }
    printf("ODDSUM: %d\n", oddsum);
    printf("EVENSUM: %d\n", evensum);
}