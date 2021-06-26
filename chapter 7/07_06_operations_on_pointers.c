#include <stdio.h>

int main()
{
    int a = 5, *firstPointer = &a, *secondPointer = &a;

    if (firstPointer == secondPointer)
    {
        printf("The two pointers are equal \n");
    }

    printf("Addition of 2 to firstPointer %u \n", *firstPointer + 2);
    printf("Substraction of 2 from secondPointer %u \n", *secondPointer - 2);
    printf("Substraction of firstPointer from secondPointer %u \n", *firstPointer - *secondPointer);

    return 0;
}