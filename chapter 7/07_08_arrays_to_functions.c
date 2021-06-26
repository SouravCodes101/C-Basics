#include<stdio.h>

// void printArray(int *ptr, int n) {
//     for(int i=0; i<n; i++) {
//         printf("The value of element %d is %d \n",i+1,*(ptr+i));
//     }
// }

void printArray(int ptr[], int n) {
    for(int i=0; i<n; i++) {
        printf("The value of element %d is %d \n",i+1,ptr[i]);
    }
    ptr[2] = 55555; //This value will be changed in arr array of main as well
}

int main()
{
    int arr[]={12,141241,4321,2314,123,5432,643};
    printArray(arr, 7);
    printf("%d\n", arr[2]);
    
    return 0;
}