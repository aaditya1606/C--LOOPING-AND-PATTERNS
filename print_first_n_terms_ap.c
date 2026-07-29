/*
PROGRAM: PRINT FIRST N TERMS OF AP
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int a, d, n;
    printf("Enter the first term of ap: ");
    scanf("%d", &a);
    printf("Enter the common difference of ap: ");
    scanf("%d", &d);
    printf("Enter the number of terms in ap: ");
    scanf("%d", &n);
    if (n > 0)
    {
        int i, an;
        for (i = 1; i <= n; i++)
        {
            an = a + (i - 1) * d;
            printf("%d ", an);
        }
    }
    else
    {
        printf("N SHOULD BE POSITIVE!!");
    }
    return 0;
}