#include<stdio.h>

void tenTimes(int *a);

int main()
{
    int x = 5;
    printf("The value of x is %d\n", x);
    tenTimes(&x);
    printf("The value of 10times x is %d\n", x);

    return 0;
}

void tenTimes(int *a) {
    int temp;
    temp = (10 * (*a));
    *a = temp;
}