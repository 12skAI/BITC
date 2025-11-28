#include <stdio.h>

int main()
{
    char oper;
    int x, y, value;
    printf("!!!Welcome to CLI based calc!!!\n\nEnter the operation you want perform (+,-,*,/) : ");
    scanf("%c", &oper);
    printf("Enter x : ");
    scanf("%d", &x);
    printf("Enter y : ");
    scanf("%d", &y);
    switch (oper)
    {
    case '+':
        printf("%d + %d = %d", x, y, x + y);
        break;
    case '-':
        printf("%d - %d = %d", x, y, x - y);
        break;
    case '*':
        printf("%d * %d = %d", x, y, x * y);
        break;
    case '/':
        printf("%d / %d = %d", x, y, x / y);
        break;
    default:
        printf("Wrong choice of x or y or operation!!!!");
    }
    return 0;
}