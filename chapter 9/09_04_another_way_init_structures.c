#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee sourav = {100, 74.16541, "Sourav"};

    printf("code is: %d \n", sourav.code);
    printf("Salary is: %.3f \n", sourav.salary);
    printf("Name is: %s \n", sourav.name);

    return 0;
}