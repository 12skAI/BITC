#include <stdio.h>

int main(){
    int i, a[5];
    printf("Enter the elements of array: ");
    for (i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    printf("%d, %d, %d, %d, %d", a[0], a[1], a[2], a[3], a[4]);
    return 0;
}