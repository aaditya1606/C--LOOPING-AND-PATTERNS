/*
PROGRAM: PRINT SUM OF FIRST N TERMS OF FIBONACCI SERIES
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    int i, sum, first = 0, second = 1, next;
    for (i = 1; i <= n; i++)
    {
        sum = sum + first;
        next = first + second;
        first = second;
        second = next;
    }
    printf("SUM: %d", sum);
    return 0;
}