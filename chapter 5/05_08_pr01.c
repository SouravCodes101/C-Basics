#include<stdio.h>

float average(int a, int b, int c);

int main()
{
   int a,b,c;
   printf("Enter the first number\n");
   scanf("%d", &a);
   printf("Enter the second number\n");
   scanf("%d", &b);
   printf("Enter the third number\n");
   scanf("%d", &c);

   printf("The average id %f\n", average(a,b,c));
    
    return 0;
}

float average(int a, int b, int c) {
    float avg;
    avg = (float)(a+b+c)/3;
    return avg;
}