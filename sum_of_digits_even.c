/*
PROGRAM: PRINT ALL NUMBERS WHOSE SUM OF DIGITS IS EVEN(1-100)
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int i = 1;
    for (i = 1; i <= 100; i++)
    {
        if (i <= 9)
        {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
        }
        if (i >= 10)
        {
            int temp = i;
            int sum = 0;
            while (temp > 0)
            {
                int digit;
                digit = temp % 10;
                sum = sum + digit;
                temp = temp / 10;
            }
            if (sum % 2 == 0)
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}