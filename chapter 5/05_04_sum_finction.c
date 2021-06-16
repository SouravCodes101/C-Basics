#include<stdio.h>
// Sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); //function prototype declaration

int main()
{
    int a, b;
    printf("Enter two numbers to have sum for\n");
    scanf("%d %d",&a,&b);
    sum(a, b); //function call
    //  \  \
    //   -------> a and b are Function Arguments

    return 0;
}

        //   --------> a and b are Function Parameters
int sum (int a, int b) { //function definition
    printf("Sum of %d and %d is: %d",a,b,a+b);
}