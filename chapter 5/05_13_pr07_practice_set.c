#include<stdio.h>

int addNumbers(int n);

int main()
{
    int num;
    printf("Enter a positive integer \n");
    scanf("%d", &num);
    printf("Sum = %d\n", addNumbers(num));
    
    return 0;
}

int addNumbers(int n) {
    if(n!=0){
        return n + addNumbers(n - 1);
    }
    else {
        return n;
    }
}