#include<stdio.h>

int sum (int a, int b);

int main()
{
    int x = 2, y = 10; 
    printf("The value of x and y before function call is %d and %d\n", x, y);  
    printf("The value of 2 + 10 is %d \n", sum(x, y));  
    printf("The value of x and y after function call  is %d and %d\n", x, y);  
    
    return 0;
}

int sum (int a, int b) {
    int sum;
    sum = a + b;
    b = 3434;
    a = 23432;
    return sum;     
}