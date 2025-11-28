#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num % 35 == 0)
    { // same as ((num%7 == 0) && (num%5 == 0))
        printf("%d is divisible by both 7 and 5", num);
    }
    else if (num % 5 == 0)
    {
        printf("%d is divisible by 5", num);
    }
    else if (num % 7 == 0)
    {
        printf("%d is divisible by 7", num);
    }
    else
    {
        printf("%d is not divisible by either of 7 or 5", num);
    }
    return 0;
}