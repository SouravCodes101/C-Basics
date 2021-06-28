#include<stdio.h>
#include<string.h>

typedef struct student {
    int roll;
    char name[20];
}stu;

int main()
{
    stu s1,s2;
    stu *ptr, *str;

    ptr = &s1;
    str = &s2;

    //Without the use of arrow operator
    (*str).roll = 4311;
    strcpy((*str).name, "Sourav");

    //With the use of arrow operator
    ptr -> roll = 1203;
    strcpy(ptr -> name, "Sonia");
    
    printf("The name of the student s1 is %s \n", s1.name);
    printf("The roll number of the student s1 is %d \n", s1.roll);

    printf("\n");

    printf("The name of the student s2 is %s \n", s2.name);
    printf("The roll number of the student s2 is %d \n", s2.roll);

    return 0;
}