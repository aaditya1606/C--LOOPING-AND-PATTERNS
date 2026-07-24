/*
PROGRAM: PRINT ALL THE ODD NUMBERS BETWEEN 1 AND 100
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int i = 1;
    printf("Sequence: ");
    while (i < 101)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}