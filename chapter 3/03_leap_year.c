#include<stdio.h>

int main()
{
    int year;

    printf("Enter the year \n");
    scanf("%d", &year);
    
    if(year%4==0) {
        if(year%100==0) {
            if(year%400==0) {
                printf("The year is a leap year \n");
            }
            else {
                printf("The year is not a leap year \n");
            }
        }
        else {
            printf("The year is a leap year\n");
        }
    } else {
        printf("Year is not a leap year\n");
    }

    return 0;
}