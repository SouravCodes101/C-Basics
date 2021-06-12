#include<stdio.h>

int main()
{
    int i ,n = 7, factorial = 1;
    // factorial(4) = 4 * 3 * 2 * 1
    for(i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("The value of factorial %d is %d",  n , factorial);

    return 0;
}