#include<stdio.h>

int main()
{
    int length, breadth, area;
    printf("Enter the length: \n");
    scanf("%d", &length);

    printf("Enter the breadth: %d \n");
    scanf("%d", &breadth);

    area = length * breadth;

    printf("The area of the rectangle is: %d \n", area);
    
    return 0;
}