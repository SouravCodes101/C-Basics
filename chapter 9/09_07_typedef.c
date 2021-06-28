#include<stdio.h>
#include<string.h>

typedef struct employee {
    int code;
    float salary;
    char name[20];
}emp;

void show(emp emp1);

int main()
{
    //Declaring e1 and ptr 
    emp e1;
    emp *ptr;

    //Pointer ptr to e1
    ptr = &e1;

    //Set the member values for e1
    ptr -> code = 101;
    ptr -> salary = 100.94;
    strcpy(ptr -> name, "Sonia");
    show(e1);

    return 0;
}

void show(emp emp1){
    printf("The code of employee is : %d \n", emp1.code );
    printf("The salary of employee is : %.3f \n", emp1.salary);
    printf("The name of employee is : %s \n", emp1.name);
    emp1    .code = 34;
}