#include<stdio.h>

void slice (char *st, int n, int m);

int main()
{
    char st[] = "Sonia";
    slice(st, 1, 5  );
    printf("%s", st);
    
    return 0;
}

void slice (char *st, int m, int n) {
    int i = 0;
    while((m+i)<n){
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
}