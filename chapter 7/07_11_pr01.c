#include<stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    // ptr = &arr[0];
    ptr = arr;

    if((ptr+2) == &arr[2]) {
        printf("These point to the same location in memory\n");
    }
    else {
        printf("The pointer does not point to the third element \n");
    }
    
    return 0;
}