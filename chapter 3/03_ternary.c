#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    // One Liner 
    (a<5) ? printf("A is less than 5\n") : printf("A is greater than 5\n");
    
    return 0;
}