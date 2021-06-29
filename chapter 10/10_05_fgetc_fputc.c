#include<stdio.h>

int main()
{
    FILE *ptr;
    // fgetc demo for reading a file
    //ptr = fopen("getcdemo.txt", "r");
    //char c = fgetc(ptr);
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    // printf("The value of the character is %c \n", fgetc(ptr));
    
    ptr = fopen("putcdemo.txt", "w");
    putc('S',ptr);
    putc('o',ptr);
    putc('n',ptr);
    putc('i',ptr);
    putc('a',ptr);
    
    fclose(ptr);
    
    return 0;
}