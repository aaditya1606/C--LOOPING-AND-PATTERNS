/*
PROGRAM: PRINT FIBONACCI SERIES UPTO N TERMS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms in sequence: ");
    scanf("%d", &n);
    if (n > 0)
    {
        int first = 0, second = 1, next, i;
        for (i = 1; i <= n; i++)
        {
            printf("%d ", first);
            next = first + second;
            first = second;
            second = next;
        }
    }
    else
    {
        printf("INVALID INPUT!!");
    }
    return 0;
}