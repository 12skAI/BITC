#include <stdio.h>

/*
when we assign value to a variable, in c that expression also returns that variate as it's output so write int i =10 in c is like writing
(i = 10 and
return i)
in python.
*/
/*
x++ : post updation - use x and then increment it
++x : pre updation - increment x and then use it
*/

// int main(){
//     int i=1;
//     printf("%d\n", i);
//     printf("%d\n", i = 12);
//     while (i <= 10){
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }

// int main(){
//     int x=4, y=2, z;
//     z = x-- -y;
//     printf("%d %d %d\n", x, y, z);
//     return 0;
// }

// //while loop
// int main(){
//     int x = 4, y = 0, z;
//     while (x >= 0){
//         x--;
//         y++;
//         if (x == y){
//             continue; //pass
//         }
//         else{
//             printf("\n%d%d\n", x, y);
//         }
//     }
// }

// do while runs the loop atleast once, because it says do this and then check if while condition is true, unlike while where we say check 
// condition and then do this.
// so we use do while when we need to run the code atleast once
// int main(){
//     int i=1;
//     do{
//         printf("%d\n", i);
//         i++;
//     } while (i<=10);
//     return 0;
// }

//FUNCTIONS
float area(float, float); // declaration
float area(float l, float b){ //defination
    return l*b;
}

int main(){
    float l, b;
    printf("Enter length and breadth with a space in between : ");
    scanf("%f %f", &l, &b);
    printf("area is %f sq units\n", area(l,b)); // calling
    return 0;
}