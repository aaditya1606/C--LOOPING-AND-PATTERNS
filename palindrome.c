/*
PROGRAM: CHECK IF A NUMBER IS PALINDROME OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int i, digit, reverse = 0, temp = number;
    if (number >= 0)
    {
        while (temp > 0)
        {
            digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
        }
        if (number == reverse)
        {
            printf("PALINDROME!!");
        }
        else
        {
            printf("NOT PALINDROME!!");
        }
    }
    else
    {
        printf("INVALID INPUT!!");
    }
    return 0;
}
