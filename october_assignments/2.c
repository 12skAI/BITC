#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if ((num % 9) == 0)
    {
        printf("%d is divisible by 9", num);
    }
    else
    {
        printf("%d is not divisible by 9", num);
    }
    return 0;
}