#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr, n;
    printf("Enter the number of spaces to be dynamically allocated \n");
    scanf("%d", &n);
    ptr = ( int* ) calloc(n, sizeof(int));

    for(int i=0 ; i<n ; i++) {
        printf("Enter value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }
   
    for(int i=0 ; i<n ; i++) {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }
    
    return 0;
}