#include<stdio.h>

int main()
{
    char a;
    printf("Enter a character \n");
    scanf("%c", &a);

    if(a>=65 && a<=90) {
        printf("Character is Uppercase\n");
    } 
    else if (a>=97 && a<=122) {
        printf("Character is Lowercase\n");
    }
    else {
        printf("Invalid entry!!");
    }
    
    return 0;
}