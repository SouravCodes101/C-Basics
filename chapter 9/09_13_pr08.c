#include<stdio.h>

typedef struct bank{
    int accNo;
    char name[25];
}b;

void display(b cus);

int main()
{
    b c[3]; 

    for(int i = 0; i<3 ; i++) {
        printf("Enter the Account number for customer %d \n", i+1);
        scanf("%d", &c[i].accNo);
        printf("Enter the Name for customer %d \n", i+1);
        scanf("%s", &c[i].name);
    }
    
    for(int i = 0 ; i<3 ; i++) {
        display(c[i]);
    }

    return 0;
}

void display(b cus){
    printf("The account number is : %d \n", cus.accNo);
    printf("The Name is : %s \n", cus.name);
}