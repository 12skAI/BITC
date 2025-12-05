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

/*
fibanaci sequence generation
1 2 3 5 8 13 21 34 .....

TODO this is homework

think like this: fib(5) (which is 6th position) is like: fib(4) + fib(3) which is: 
(fib(3) + fib(2)) + (fib(2) + fib(1)) which is: 
((fib(2) + fib(1)) + (fib(1) + fib(0))) + ((fib(1) + fib(0)) + fib(1)) which is:
(((fib(1) + fib(0)) + fib(1)) + (fib(1) + fib(0))) + ((fib(1) + fib(0)) + fib(1)) which finally is:
1 + 0 + 1 + 1 + 0 + 1 + 0 + 1 = 5
*/

#include <stdio.h>

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("%d, ", fib(i));
    }
    return 0;
}


/*
Compute nCr


#include <stdio.h>

int factorial(int n){
    if (n==0){
        return 1;
        //here the program stops
    }
    return n*factorial(n-1);
}

int selection(int n, int r){
    if (r>n){
        printf("r cannot be greater than n");
        return -1;
    }
    int val;
    val = factorial(n)/(factorial(n-r)*factorial(r));
    return val;
}

int main(){
    int n, r;
    printf("Enter n r: ");
    scanf("%d", &n);
    scanf("%d", &r);
    printf("%d Choose %d = %d",n, r, selection(n, r));
    return 0;
}
*/

/*
Swapping two variables without using a temporary 3rd variable and call by reference in a function

1. What a pointer is
A pointer is just an integer that stores a memory address.
Not the value. The location of the value.
and we get the address of a variable x by &x, and we get value at an address y by *y.
datatype of pointer is int*, float*, etc.
*/
// #include <stdio.h>

// void swap(int* a, int* b){
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
//     return;
// }

// int main(){
//     int a=2, b=5;
//     swap(&a, &b);
//     printf("a: %d, b: %d", a, b);
//     return 0;
// }