/*
PROGRAM: PRINT ALL THE NUMBERS FROM 1-N WHOSE BINARY REPRESENTATION HAS AN EVEN NUMBER OF 1s
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    if (n > 0)
    {

        int i;
        for (i = 1; i <= n; i++)
        {
            int quotient, remainder, number = i, count = 0;
            while (number != 0)
            {
                remainder = number % 2;
                if (remainder == 1)
                {
                    count++;
                }
                number = number / 2;
            }
            if (count % 2 == 0)
            {
                printf("%d ", i);
            }
        }
    }
    else
    {
        printf("ENTER POSITIVE N!");
    }
    return 0;
}