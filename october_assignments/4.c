#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the length of side a: ");
    scanf("%d", &a);
    printf("Enter the length of side b: ");
    scanf("%d", &b);
    printf("Enter the length of side c: ");
    scanf("%d", &c);
    if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
    {
        printf("Valid choice of side lengths for a triangle");
    }
    else
    {
        printf("Not a valid choice of side lengths for a triangle");
    }
    return 0;
}