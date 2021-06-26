#include<stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg);

int main()
{
    int a, b, sum;
    float avg;
    printf("Enter two numbers \n");
    scanf("%d %d", &a, &b);
    sumAndAvg(a,b,&sum,&avg);
    printf("The sum of %d and %d is %d\n",a, b, sum);
    printf("The average of %d and %d is %.2f\n",a, b, avg);

    return 0;
}

void sumAndAvg(int a, int b, int *sum, float *avg) {
    *sum = a + b;
    *avg = (float)(*sum)/2;
   
}