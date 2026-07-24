/*
PROGRAM: PRINT NUMBERS FROM 10 DOWN TO 1
LANGUAGE: C
AUTHOR-AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int i = 10;
    printf("SEQUENCE: ");
    while (i > 0)
    {
        printf("%d ", i);
        i--;
    }
    return 0;
}