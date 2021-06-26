#include<stdio.h>

int main()
{
    int a = 4;
    int *ptr = &a;

    printf("The value of a is %d \n", a);
    printf("The address of a = %u is %u \n", *ptr, ptr);
    
    return 0;
}