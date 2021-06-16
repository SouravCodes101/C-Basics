#include<stdio.h>
#include<math.h>

int main()
{
    int a, area;
    printf("Enter the length of the side of the square\n");
    scanf("%d", &a);
    area = pow(a ,2);
    printf("The area of the square is %d\n", area);

    
    return 0;
}