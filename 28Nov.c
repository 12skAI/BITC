/*
Given an array of n integers and search for a key in array

#include <stdio.h>

int main(){
    int n, key, found=0;
    printf("Enter the length of Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array: ");
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search for: ");
    scanf("%d", &key);
    for (int j =0; j<n;j++){
        if (arr[j] == key){
            printf("Key found at %dth postion", j);
            found=1;
            break;
        }
    }
    if (!found){
        printf("Key not found!!");
    }
    return 0;
}
*/
