/*
PROGRAM: COUNT HOW MANY NUMBERS BETWEEN 1-500 ARE DIVISIBLE BY 7 BUT NOT BY 5
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int i, count = 0;
    for (i = 1; i <= 500; i++)
    {
        if (i % 7 == 0 && i % 5 != 0)
        {
            count++;
        }
    }
    printf("COUNT: %d", count);
    return 0;
}