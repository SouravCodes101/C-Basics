#include <stdio.h>

/*
This is our first C Program
which is awesome!

*/
int main()
{
    // int a = 4;
    // //int b = 8.5; //Not Recommended 8.5 is not an integer

    // float b = 8.5;
    // char c = 'u';
    // int d = 45;
    // int e = 45 + 9;
    // printf("The value of a is %d \n", a);
    // printf("The value of b is %f \n", b);
    // printf("The value of c is %c \n", c);
    // printf("Sum of a and d is %d \n", a - d);
    // printf("The value of e is %d", e);

    int a, b, sum;

    printf("Enter the first number: \n");
    scanf("%d", &a);

    printf("Enter the second number: \n");
    scanf("%d", &b);

    sum = a + b ;

    printf("Sum is: %d", sum);
    return 0;
}

/* 
    Try it yourself --> Create a program to add two numbers in C
*/