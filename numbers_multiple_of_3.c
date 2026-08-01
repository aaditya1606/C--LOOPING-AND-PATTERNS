/*
PROGRAM: PRINT THE NUMBERS BETWEEN 1-100 WHOSE DIGITS ADD UPTO A MULTIPLE OF 3
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    for (number = 1; number <= 100; number++)
    {
        int digit, sum = 0, flag = 0;
        if (number < 10)
        {
            if (number % 3 == 0)
            {
                flag = 1;
            }
        }
        else
        {
            int temp=number;
            while (temp > 0)
            {
                digit = temp % 10;
                sum = sum + digit;
                temp = temp / 10;
            }
            if (sum % 3 == 0)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("%d ", number);
        }
    }
    return 0;
}