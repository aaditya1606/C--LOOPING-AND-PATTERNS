/*
PROGRAM: FIND LCM OF TWO NUMBER USING LOOPS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int num1;
    int num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int i = 1;
    if (num1 > 0 && num2 > 0)
    {
        while (1)
        {
            if (i % num1 == 0 && i % num2 == 0)
            {
                printf("LCM: %d", i);
                break;
            }
            i++;
        }
    }
    else
    {
        printf("ENTER THE POSITIVE NUMBER ONLY!!!");
    }
    return 0;
}