#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you, char comp);

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;
    
    if(number<33) {
        comp = 's';
    }
    else if(number>33 && number <66) {
        comp = 'w';
    }
    else{
        comp = 'g';
    }

    printf("Enter 's' for snake, 'w' for water and 'g' for gun \n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    printf("You Choose %c and computer choose %c. \n", you, comp);
    if(result == 0) {
        printf("Game Draw \n");
    } 
    else if(result == 1){
        printf("You Win!! \n");
    }
    else {
        printf("Oops you loose\n");
    }
  

    return 0;
}

int snakeWaterGun(char you, char comp){
    //return 1 if you win, -1 if you loose and 0 if draw
    //Condition for draw
    //Cases Covered:
    //ss
    //gg
    //ww
    if(you == comp) {
        return 0;
    }

    //Non Draw Conditions   
    //Cases Covered
    //sg
    //gs
    //sw
    //ws
    //gw
    //wg
    if(you == 's' && comp == 'g') { 
        return -1;
    }
    else if(you == 'g' && comp == 's'){
        return 1;
    }

    if(you == 's' && comp == 'w') {
        return 1;
    }
    else if(you == 'w' && comp == 's'){
        return -1;
    }

    if(you == 'g' && comp == 'w') {
        return -1;
    }
    else if(you == 'w' && comp == 'g'){
        return 1;
    }
}