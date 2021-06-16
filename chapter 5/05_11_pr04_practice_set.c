#include<stdio.h>

void fibonacci(int n);

int main()
{
    int n;
    printf("Enter the number of terms to be printed in the series\n");
    scanf("%d", &n);

    fibonacci(n);
    
    return 0;
}

void fibonacci(int n) {
    int a,b,c;
    a = 1;
    b = 1;

    printf("%d %d", a, b);

    for (int i = 1; i<=n-2; i++) {
        c = a + b;

        printf(" %d", c);

        a=b;
        b=c;
    }
}