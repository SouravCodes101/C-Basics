#include<stdio.h>

int main()
{
    int num;
    printf("**** Multiplication Table in Reverse Order ****\n");
    printf("Enter the multiplication table to be printed\n");
    scanf("%d", &num);

    for(int i = 10;i; i--) {
        printf("%d X %d = %d\n", num , i , i * num);
    }
    
    return 0;
}