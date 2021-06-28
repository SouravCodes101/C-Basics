#include<stdio.h>

typedef struct complex {
    int real;
    float complex;
}comp;

int main()
{
    comp c1,c2;
    comp *ptr1, *ptr2;

    ptr1 -> real = 5;
    ptr1 -> complex = -5;

    ptr2 -> real = 6;
    ptr2 -> complex = -6;

    return 0;
}