/*
PROGRAM: PRINT ALL THE NUMBERS THAT ARE PALINDROME BETWEEN 1-500
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number = 1;
    for (number = 1; number <= 500; number++)
    {
        int palindromeflag = 1;
        if (number < 10)
        {
            palindromeflag == 1;
        }
        else
        {
            int i = 0, size = 0, temp = number;
            int digits[5];
            while (temp > 0)
            {
                digits[i] = temp % 10;
                i++;
                size++;
                temp = temp / 10;
            }
            int j;
            for (j = 0; j < size / 2; j++)
            {
                palindromeflag == 1;
                if (digits[j] != digits[size - 1 - j])
                {
                    palindromeflag = 0;
                    continue;
                }
            }
        }
        if (palindromeflag == 1)
        {
            printf("%d ", number);
        }
    }
    return 0;
}