#include<stdio.h>

int main()
{
    float radius, height, areaCircle, areaCylinder;

    printf("Enter the radius: \n");
    scanf("%f", &radius);
    
    printf("The area of the  circle is: %f \n", (3.14 * radius * radius));
    
    printf("Enter the height: \n");
    scanf("%f", &height);

    printf("The volume of the cylinder is: %f \n", (3.14 * (radius * radius) * height));

    return 0;
}