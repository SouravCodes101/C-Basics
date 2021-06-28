#include<stdio.h>
#include<string.h>

int main()
{
    char st1[45]= "Sourav";
    char *st2 = "Sonia";
    strcat(st1, st2);
    printf("Now the st1 is %s \n", st1);
    
    return 0;
}