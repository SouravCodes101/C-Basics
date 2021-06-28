#include<stdio.h>

int main()
{   
    char str[] = {'S', 'o', 'n', 'i', 'a', '\0'}; 
    // char str[] = "Sonia";
    char *ptr = str;
    while(*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    
    return 0;
}