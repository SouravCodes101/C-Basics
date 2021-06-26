#include<stdio.h>

void printTable(int *arr, int num, int n);

int main()
{
    int m, n;

    printf("Enter the length of the array mulTable[m][n] \n");
    scanf("%d",&m);
    scanf("%d",&n);

    int mulTable[m][n];

    for(int i=0; i<m; i++) {
        if(m == 1) {
        printTable(mulTable[i], 2, n);
        }
        else if(m==2) {
            printTable(mulTable[i], 2, n);
             printTable(mulTable[i], 7, n);
        }
        else if (m==3) {
             printTable(mulTable[i], 2, n);
             printTable(mulTable[i], 7, n);
             printTable(mulTable[i], 9, n);
        }
        }
    return 0;
}

void printTable(int *mulTable, int num, int n) {
    printf("Multiplication table of %d!!\n", num);
     for(int i=0; i<n; i++) {
        mulTable[i] = (num * (i+1));
    }

    for(int i=0; i<n; i++) {
        printf("%dx%d=%d\n",num, i+1,mulTable[i]);
    }

    printf("**********************************************\n\n");
}