#include<stdio.h>

int main()
{
    int i = 1, sum = 0, n;
    printf("Enter the number of natural numbers to do the sum \n");
    scanf("%d", &n);

    do{
        sum += i;
        i++;
    } while(i<=n);
    printf("The value of Sum(1 to %d) is %d\n", n , sum);
    
    return 0;
}