#include <stdio.h>

int main()
{
    float num;
    printf("Enter the float value: ");
    scanf("%f", &num);
    float res = (num - (int)num) * 1000;
    printf("The last 3 decimal digits are: %d", (int)res);
    return 0;
}