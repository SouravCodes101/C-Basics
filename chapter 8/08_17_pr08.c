#include<stdio.h>

int occurrence(char st[], char *c) ;

int main()
{
    char st[] = "SoniaSourav";
    int count = occurrence(st, "a");
    printf("The number of occurrences of 'a' in the string is %d \n", count);

    return 0;
}

int occurrence(char st[], char *c)  {
    char *ptr = st;
    int count = 0;
    while(*ptr != '\0') {
        if ( *ptr == *c) {
            count++;
        }
        ptr++;
    }

    return count;
}