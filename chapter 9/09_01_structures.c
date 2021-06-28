#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

int main()
{
    int a = 34;
    char b = 's';
    float d = 1321.1123;
    
    //employee e1;
    // e1.salary = 34.2341 --> Wont work without employee structures

    struct employee e1;
    e1.code = 100;
    e1.salary = 34.23414314;
    //e1.name   = "Sourav"; -->Wont Work
    strcpy(e1.name, "Sonia");

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}