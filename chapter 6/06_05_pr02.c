#include<stdio.h>

void address(int j);

int main()
{
    int i = 5;
    printf("The value of variable i is %d \n", i);
    address(i);
    printf("The address of variable i is %u \n", &i);
    return 0;
}

void address(int j) {
    printf("The address of variable j is %u \n", &j);
}