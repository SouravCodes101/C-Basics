#include<stdio.h>

int main()
{
    int i = 1 , n , factorial = 1;
    
    printf("Enter the number to find the factorial for\n");
    scanf("%d", &n);

    while(i<=n) {
        factorial *= i;
        i++;
    }

    printf("The value of the factorial %d is %d", n , factorial);

    return 0;
}