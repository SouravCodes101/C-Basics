#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr;
    //sizeof operator in c
    // printf("The size of int on my pc is %d \n", sizeof(int));
    // printf("The size of float on my pc is %d \n", sizeof(float));
    // printf("The size of char on my pc is %d \n", sizeof(char));
    ptr = (float *) malloc(6 * sizeof(float));
    for(int i=0; i<6; i++){
        printf("Enter value of %d element:  \n", i);
        scanf("%f", &ptr[i]);
    }
   
    for(int i=0; i<6; i++){
        printf("The value of %d element is : %.2f \n", i, ptr[i]);
    }

    return 0;
}