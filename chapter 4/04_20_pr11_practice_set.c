#include<stdio.h>

int main()
{
    int i = 2 , n , prime = 1;
    printf("Enter the number to be tested for: \n");
    scanf("%d", &n);
    while(i<n) {
        if (n%i==0) {
            prime = 0;
            break;
        }
        i++;
    }
    if (prime==0) {
        printf("This is not a prime number \n");
    }
    else {
        printf("This is a prime number \n");
    }
    
    return 0;
}