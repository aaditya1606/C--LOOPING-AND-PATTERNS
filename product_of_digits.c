/*
PROGRAM: PRINT THE PRODUCT OF DIGITS OF A GIVEN NUMBER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    int lastdigit, product = 1;
    if (n > 10)
    {
        temp = n;
        while (temp > 0)
        {
            lastdigit = temp % 10;
            product = product * lastdigit;
            temp = temp / 10;
        }
        printf("PRODUCT OF DIGITS OF %d : %d", n, product);
    }
    else if (n > 0 && n < 9)
    {
        printf("PRODUCT OF DIGITS OF %d : %d", n, n);
    }
    else
    {
        printf("INVALID INPUT!");
    }
    return 0;
}