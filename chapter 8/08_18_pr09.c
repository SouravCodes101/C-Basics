#include<stdio.h>

int presentOrNot(char st[], char *c) ;

int main()
{
    char st[] = "SoniaSourav";
    char a;
    printf("Enter a character to check whether it is present in the string or not \n ");
    scanf("%c", &a);
    int count = presentOrNot(st, &a);
    if (count == 1) {
        printf("The given character is present in the string \n");
    }
    else {
        printf("The given character is not present in the string \n");
    }

    return 0;
}

int presentOrNot(char st[], char *c)  {
    char *ptr = st;
    int count = 0;
    while(*ptr != '\0') {
        if ( *ptr == *c) {
            count = 1;
        }
        ptr++;
    }

    return count;
}