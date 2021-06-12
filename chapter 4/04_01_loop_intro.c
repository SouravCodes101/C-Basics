#include<stdio.h>

int main()
{
    int num;
    
    printf("Enter the number of terms to be printed :\n");
    scanf("%d", &num);
    //Loops are used to repeat similar parts of a code snippet efficiently
    for(int i = 1; i <= num; i++) {
        printf("%d\n", i);
    }

    return 0;
}