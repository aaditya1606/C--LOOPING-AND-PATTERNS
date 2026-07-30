/*
PROGRAM: PRINT THE FIRST N TERMS OF GP
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int n, a, r;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the first term of gp: ");
    scanf("%d", &a);
    printf("Enter the common ratio of gp: ");
    scanf("%d", &r);
    int i, j, an = a;
    for (i = 1; i <= n; i++)
    {
        an = a;
        for (j = 2; j <= i; j++)
        {
            an = an * r;
        }
        printf("%d ", an);
    }
    if (n < 1)
    {
        printf("ENTER A VALID NUMBER!!");
    }
    return 0;
}