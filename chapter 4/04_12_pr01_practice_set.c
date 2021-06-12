#include<stdio.h>

int main()
{
    int num;
    printf("****MULTIPLICATION TABLE****\n");
    printf("Multiplication table to be printed for??\n");
    scanf("%d", &num);

    for(int i = 1; i<=10 ; i++) {
        printf("%d X %d = %d\n", num , i , num * i);
    }

    return 0;
}