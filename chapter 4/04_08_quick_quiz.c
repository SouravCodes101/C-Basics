#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number of natural numbers to be printed\n");
    scanf("%d", &num);

    for(int i = 0;i<num;i++) {
        printf("%d\n", i+1);
    }
    
    return 0;
}