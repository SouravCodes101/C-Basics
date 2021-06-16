#include<stdio.h>

void convert(float celsius); //function prototype

int main()
{
    float c;
    printf("Enter then temperature in celsius\n");
    scanf("%f", &c);    
    convert(c); // function call

    return 0;
}

void convert(float celsius){ //function definition
    float fahrenheit;
    fahrenheit = (celsius * 9/5) + 32;
    printf("The temperature in fahrenheit is %f", fahrenheit);
}