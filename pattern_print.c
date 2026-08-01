/*
PROGRAM: PRINT A PATTERN WHERE EACH ROW i PRINTS i*i
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number of rows: ");
    scanf("%d", &number);
    if (number <= 0)
    {
        printf("ENTER A VALID NUMBER!!");
    }
    else
    {
        int i;
        for (i = 1; i <= number; i++)
        {
            printf("%d\n", i * i);
        }
    }
    return 0;
}