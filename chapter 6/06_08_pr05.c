#include<stdio.h>

int main()
{
    int i = 345;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;

    printf("The address of i is %u \n", ptr);
    printf("The address of ptr is %u \n", ptr_ptr);
    printf("The value of i is %u \n", **(ptr_ptr));
    
    return 0;
}