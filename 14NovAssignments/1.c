/*
program to check leap year
*/
#include <stdio.h>

int main()
{

    int year, leap = 0;
    printf("Enter the year: ");
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        leap = 1;
    }else
    {
        leap = 0;
    }
    if (leap)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }

    return 0;
}
