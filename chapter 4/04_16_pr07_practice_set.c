#include<stdio.h>

int main()
{
    int i , mul = 0,num = 8, sum = 0;

    for(i = 1; i<=10 ; i++) {
        mul = num * i;
        
        sum += mul;
    }

    printf("%d", sum);
    
    return 0;
}