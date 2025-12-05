/*
Q: search for 54 in 
10 20 35 43 54 68
one way is to just run a linear search using for loop and find 54.
but since this array is already sorted, we can use another way: Binary search
Binary search: we take the whole array and go to the middle element, and then see if it's the key, if not then we see that this middle value
is less or more than the key, and according will ignore the other half which doesn't have our key and look into the required half, and keep
halving the array until we find the required key in array.
*/


#include <stdio.h>

int main(){

    struct class{
        int roll;
        char section;
    };
    struct class cl;
    cl.roll = 4;
    cl.section = 'A';

    return 0;
}