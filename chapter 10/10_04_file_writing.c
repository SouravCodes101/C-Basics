#include<stdio.h>

int main()
{
    FILE *ptr;
    int number = 20;
    ptr = fopen("generated.txt", "w");
    fprintf(ptr, "The number is : %d \n", number);
    fprintf(ptr, "This is Sonia the best sister in the world! \n");
    fprintf(ptr, "Thanks for using fprintf \n");
    fclose(ptr);
    
    return 0;
}