// #include <stdio.h>

// int main(){
//     int n, sum=0;
//     printf("Enter number of elements in array: ");
//     scanf("%d", &n);
//     int A[n];
//     for (int j = 0; j < n; j++){
//         printf("Enter element at %d position : ", j+1);
//         scanf("%d", &A[j]);
//         sum += A[j];
//     }
//     printf("Sum : %d", sum);
//     return 0;
// }

// /Given an array Arr[n], print the elements in reverse order.
// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter number of elements in array: ");
//     scanf("%d", &n);
//     int A[n];
//     for (int j = 0; j < n; j++){
//         printf("Enter element at %d position : ", j+1);
//         scanf("%d", &A[j]);
//     }
//     for (int i=n-1;i>=0;i--){
//         printf("%d\n", A[i]);
//     }
//     return 0;
// }

// /Given an array A[n], search for a key in the array, if it is not found, print "not found", if it is found print the index
#include <stdio.h>

int main(){
    int n, key, found;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int A[n];
    for (int j = 0; j < n; j++){
        printf("Enter element at %d position : ", j+1);
        scanf("%d", &A[j]);
    }
    printf("Enter the key: ");
    scanf("%d", &key);
    for (int i=0; i<n;i++){
        if (A[i] == key){
            printf("Key is at %d position.", i+1);
            found = 1;
            break;
        } else{
            found = 0;
        }
    }
    if (!found){
        printf("Not found");
    }
    return 0;
}