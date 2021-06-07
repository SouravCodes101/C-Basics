#include<stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in degree celsius: \n");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("The Fahrenheit equivalent is: %f", fahrenheit);
    
    return 0;
}