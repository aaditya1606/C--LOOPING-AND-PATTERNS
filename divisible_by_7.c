/*
PROGRAM: PRINT ALL THE NUMBERS BETWEEN A AND B DIVISIBLE BY 7
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number(a): ");
    scanf("%d", &a);
    printf("Enter the second number(b): ");
    scanf("%d", &b);
    int i, divisor = 0;
    if (a >= 0 && b >= 0 && b >= a)
    {
        if (a != b)
        {
            divisor = 0;
            for (i = a + 1; i < b; i++)
            {
                if (i % 7 == 0)
                {
                    printf("%d ", i);
                    divisor++;
                }
            }
            if (divisor == 0)
            {
                printf("NO NUMBER DIVISIBLE BY 7 EXISTS IN BETWEEN %d AND %d", a, b);
            }
        }
        else
        {
            printf("INVALID!!");
        }
    }
    else if (a >= 0 && b >= 0 && b <= a)
    {
        if (a != b)
        {
            divisor = 0;
            for (i = a -1; i > b; i--)
            {
                if (i % 7 == 0)
                {
                    printf("%d ", i);
                    divisor++;
                }
            }
            if (divisor == 0)
            {
                printf("NO NUMBER DIVISIBLE BY 7 EXISTS IN BETWEEN %d AND %d", b, a);
            }
        }
        else
        {
            printf("INVALID!!");
        }
    }
    else
    {
        printf("INVALID INPUTS!!");
    }
    return 0;
}