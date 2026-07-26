/*
PROGRAM: PRINT REVERSE OF THE GIVEN NUMBER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int i, digit;
    if (number >= 0)
    {
        printf("Reverse of %d: ", number);
        while (number > 0)
        {
            digit = number % 10;
            printf("%d", digit);
            number = number / 10;
        }
    }
    else
    {
        printf("Reverse of %d: -", number);
        number = number * -1;
        while (number > 0)
        {
            digit = number % 10;
            printf("%d", digit);
            number = number / 10;
        }
    }
    return 0;
}
