/*
find factorial of a number .
*/
#include <stdio.h>

void iterFact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    printf("%d! is %d by iteration\n", n, fact);
}
int recurFact(int n){
    int fact;
    if (n<1)
    {
        return 1;
    }
    return n*recurFact(n-1);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    iterFact(n);
    int factR = recurFact(n);
    printf("%d! is %d by recursion\n", n, factR);
    return 0;
}