#include<stdio.h>

void display(int arr[3][2]){
 for(int i=0; i<3; i++) {
        printf("{ ");
        for(int j=0; j<2; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("}");
        printf("\n");
    }
}

int main()
{
    int a[3][2];

    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) {
            printf("Enter the value of a[%d][%d] \n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    display(a);

    return 0;
}