#include<stdio.h>

int tenTimes(int *a);

int main()
{
    int x;
    printf("Enter a number \n");
    scanf("%d", &x);
    printf("Ten times %d is %d \n", x,tenTimes(&x));
    
    return 0;
}

int tenTimes(int *a) {
    return (*a * 10);
}