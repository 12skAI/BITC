// dealing with repetitions by iteration
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("!!!! Table generator !!!!\nEnter the number: ");
//     scanf("%d", &n);
//     for (int i = n; i <= 10*n; i+=n)
//     {
//         // for (this part runs once; this part returns boolean if loop should go on; this runs with every iteration)
//         // i is called iterator
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int sum = 0;
//     for (int i = 1; i <= 100; i += 1)
//     {
//         sum+=i;
//     }
//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     int sum = 0;
//     printf("Enter the number n: ");
//     scanf("%d", &n);
//     for (int i = 1; i<= n; i++){
//         sum+= (3*i + 1);
//     }
//     printf("%d", sum);
//     //checking using sum formula
//     printf("\n%d", (n/2)*(2*4 + (n-1)*3));
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    int isPrime = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 2; i <= (n - 1); i++){
        if (n % i == 0){
            isPrime = 0;
        }
    }
    if (isPrime){
        printf("%d is a prime", n);
    }
    else{
        printf("%d is a composite", n);
    }
    return 0;
}