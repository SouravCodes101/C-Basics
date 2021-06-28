#include<stdio.h>

int strlen(char *str);

int main()
{
    char str[] = "Sonia";
    int l = strlen(str);
    printf("The length of the string str is %d \n", l);
    return 0;
}

int strlen(char *str) {
    char *ptr = str;
    int len = 0;
    while(*ptr != '\0') {
        len++;
        ptr++;
    }
    return len;
}