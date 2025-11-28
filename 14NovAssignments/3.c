/*
calculate the sum of natural numbers upto n
*/
#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i=0; i <= n;i++){
        sum += i;
    }
    printf("Sum of all natural numbers upto %d is %d", n, sum);
    return 0;
}