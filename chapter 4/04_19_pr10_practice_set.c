#include <stdio.h>

int main()
{
    //Prime Numbers = A prime number (or a prime) is a natural number greater than 1
    //that is not a product of two smaller natural numbers.
    //!Disclaimer : This is not the best method to solve this problem
    // int n = 13, prime = 1;
    // for(int i = 2; i<n ; i++) {
    //     if (n%i==0) {
    //         prime = 0;
    //         break;
    //     }
    // }
    // if (prime==0) {
    //     printf("This is not a prime number \n");
    // }
    // else {
    //     printf("This is a prime number \n");
    // }

    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {
        // condition for non-prime
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

    return 0;
}