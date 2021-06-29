#include<stdio.h>

int main()
{
    FILE *ptr;
    int num1;
    int num2;
    int num3;
    ptr = fopen("pr01.txt", "r");
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    fclose(ptr);
    printf("The value of num1 is: %d \n", num1);
    printf("The value of num2 is: %d \n", num2);
    printf("The value of num3 is: %d \n", num3);

    return 0;
}