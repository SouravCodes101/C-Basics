#include<stdio.h>

typedef struct date{
    int day;
    int month;
    int year;
} date;

void display(date d);

int dateCmp(date d1, date d2);

int main()
{
    date d1 = {5, 1, 2001};
    date d2 = {6, 1, 1998};
    display(d1);
    display(d2);
    int a = dateCmp(d1, d2);
    printf("Date comparison returns: %d\n", a);
    
    return 0;
}

void display(date d){
    printf("The date is: %d/%d/%d \n", d.day, d.month, d.year);
} 

int dateCmp(date d1, date d2){
    //Make decision based on the basis of Year Comparison
    if(d1.year>d2.year){
        return 1;
    }

    if(d1.year<d2.year){
        return -1;
    }

    //Make decision based on the basis of Month Comparison
   
    if(d1.month>d2.month){
        return 1;
    }

    if(d1.month<d2.month){
        return -1;
    }

    //Make decision based on the basis of Day Comparison
   
    if(d1.day>d2.day){
        return 1;
    }

    if(d1.day<d2.day){
        return -1;
    }
    return 0;
}