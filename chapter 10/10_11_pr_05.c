#include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("pr05.txt", "r");
    fscanf(ptr, "%d", &num);
    ptr = fopen("pr05.txt", "w");
    fprintf(ptr, "%d", num*2);
    fclose(ptr);
    
    return 0;
}