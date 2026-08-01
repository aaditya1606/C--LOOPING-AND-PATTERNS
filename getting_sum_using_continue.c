/*
PROGRAM: TAKE 5 NUMBERS AS INPUT.IF THE USER ENTERS 0,SKIP IT USING CONTINUE.AT THE END,PRINT THE SUM OF ALL NON ZERO NUMBERS ENTERED.
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    int i, sum = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("ENTER THE NUMBER: ");
        scanf("%d", &number);
        if (number == 0)
            continue;
        else
        {
            sum = sum + number;
        }
    }
    printf("SUM: %d", sum);
    return 0;
}