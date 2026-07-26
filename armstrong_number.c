/*
PROGRAM: CHECK IF A NUMBER IS ARMSTRONG NUMBER OR NOT
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int i, count = 0, j, digit, newnumber = 1, sum = 0, k;
    if (number >= 0)
    {
        for (i = number; i > 0; i = i / 10)
        {
            count++;
        }
        for (j = number; j > 0; j = j / 10)
        {
            newnumber = 1;
            digit = j % 10;
            for (k = count; k > 0; k--)
            {
                newnumber = newnumber * digit;
            }
            sum = sum + newnumber;
        }
        if (sum == number)
        {
            printf("ARMSTRONG NUMBER!!");
        }
        else
        {
            printf("NOT A ARMSTRONG NUMBER");
        }
    }
    else
    {
        printf("ENTER POSITIVE NUMBER!");
    }
    return 0;
}