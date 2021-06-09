#include<stdio.h>

int main()
{
    int a,b,c,d,e;

    printf("Enter a number \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a>b && a>c && a>d && a>e) {
        printf("%d is the greatest number \n", a);
    }
    if(b>a && b>c && b>d && b>e) {
        printf("%d is the greatest number \n", b);
    }
    if(c>b && c>a && c>d && c>e) {
        printf("%d is the greatest number \n", c);
    }
    if(d>b && d>c && d>a && d>e) {
        printf("%d is the greatest number \n", d);
    }
    if(e>b && e>c && e>d && e>a) {
        printf("%d is the greatest number \n", e);
    }
    
    return 0;
}