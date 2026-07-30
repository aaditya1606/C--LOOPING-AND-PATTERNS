/*
PROGRAM: CHECK IF A NUMBER IS A STRONG NUMBER OR NOT(sum of factorials of digits = number)
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    int temp = number;
    while (temp > 0)
    {
        int digit = temp % 10;
        int i, factorial = 1;
        for (i = digit; i > 0; i--)
        {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        temp = temp / 10;
    }
    if (sum == number)
    {
        printf("STRONG NUMBER!!");
    }
    else
    {
        printf("NOT A STRONG NUMBER!!");
    }
    return 0;
}