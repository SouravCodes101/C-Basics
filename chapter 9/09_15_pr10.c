#include<stdio.h>

typedef struct time{
    int hour;
    int minutes;
    int seconds;
} time;

void display(time t);

int dateCmp(time t1, time t2);

int main()
{
    time t1 = {17, 1, 50};
    time t2 = {12, 1, 45};
    display(t1);
    display(t2);
    int a = dateCmp(t1, t2);
    printf("Time comparison returns: %d\n", a);
    
    return 0;
}

void display(time t){
    printf("The time is: %d:%d:%d \n", t.hour, t.minutes, t.seconds);
} 

int dateCmp(time t1, time t2){
    //Make decision based on the basis of hour Comparison
    if(t1.hour>t2.hour){
        return 1;
    }

    if(t1.hour<t2.hour){
        return -1;
    }

    //Make decision based on the basis of minutes Comparison
   
    if(t1.minutes>t2.minutes){
        return 1;
    }

    if(t1.minutes<t2.minutes){
        return -1;
    }

    //Make decision based on the basis of seconds Comparison
   
    if(t1.seconds>t2.seconds){
        return 1;
    }

    if(t1.seconds<t2.seconds){
        return -1;
    }
    return 0;
}