/*
PROGRAM: FIND HCF OF TWO NUMBERS USING LOOPS
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("ENTER NUMBER1: ");
    scanf("%d", &num1);
    printf("ENTER NUMBER2: ");
    scanf("%d", &num2);
    int i, j, factor1, factor2, commonfactor, previouscommon = 0;
    if (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
        {
            for (i = 1; i <= num2; i++)
            {
                if (num1 % i == 0 && num2 % i == 0)
                {
                    commonfactor = i;
                }
            }
        }
        else if (num1 < num2)
        {
            for (i = 1; i <= num1; i++)
            {
                if (num1 % i == 0 && num2 % i == 0)
                {
                    commonfactor = i;
                }
            }
        }
        printf("HCF: %d", commonfactor);
    }
    else
    {
        printf("ENTER A POSITIVE NUMBER ONLY!!");
    }
    return 0;
}