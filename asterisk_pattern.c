/*
PROGRAM: PRINT AN INVERTED PYRAMID USING '*'
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int rows;
    printf("ENTER THE NUMBER OF ROWS: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 11 - 2 * i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}