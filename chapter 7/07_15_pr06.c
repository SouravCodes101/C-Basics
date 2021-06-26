#include<stdio.h>

void counting(int arr[], int count);

int main()
{
    int arr[10]={-1,-2,-3,-4,-5,6,7,8,9,10};
    int count = 0;

    counting(arr, count);
    
    return 0;
}

void counting(int arr[], int count) {
 for(int i=0; i<10; i++) {
        if(arr[i]>=0) {
            count++;
        }
    }

    printf("The number of positive integers in the array is %d \n", count);
}