/*
PROGRAM: FIND THE SMALLEST AND THE LARGEST DIGIT IN A GIVEN NUMBER
LANGUAGE: C
AUTHOR- AADITYA SHAKYA
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number > 0)
    {
        int currentvalue, previousvalue = 0, temp1 = number, temp2 = number;
        int largestflag = 0, smallestflag = 0;
        while (temp1 > 0)
        {
            currentvalue = temp1 % 10;
            if (currentvalue > previousvalue)
            {
                largestflag = 1;
                previousvalue = currentvalue;
            }
            temp1 = temp1 / 10;
        }
        if (largestflag == 1)
        {
            printf("Largest Digit: %d\n", previousvalue);
        }
        previousvalue = temp2 % 10;
        temp2 = temp2 / 10;
        while (temp2 > 0)
        {
            currentvalue = temp2 % 10;
            if (currentvalue < previousvalue)
            {
                smallestflag = 1;
                previousvalue = currentvalue;
            }
            temp2 = temp2 / 10;
        }
        if (smallestflag == 1)
        {
            printf("Smallest Digit: %d\n", previousvalue);
        }
    }
    else{
        printf("ENTER A POSITIVE NUMBER!!");
    }
    return 0;
}