#include<stdio.h>

int main()
{
    int num,i=0;
    printf("Enter the no. of natural numbers to be printed\n");
    scanf("%d", &num);

    do {
        printf("[%d]\n", i+1);
        i++;
    } while(i<=num);
    return 0;
}