#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    char name[20];
    int salary; 
    ptr = fopen("salary.txt", "w");
    printf("Enter your name: ");
    scanf("%s", &name);   
    printf("Enter your salary: ");
    scanf("%d", &salary);  

    
    fprintf(ptr, "%s, %d", name, salary);
    fclose(ptr); 
    
    return 0;
}