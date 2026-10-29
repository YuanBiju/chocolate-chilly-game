/*
Name: Yuan Nevin Biju
Date: 29/10/2026
Description: Create chocolate chilli game.
                Two player take turns choosing a certain number(less than or equal to three) of chocolates out of 10 chocolates.
                The player with no more chocolates to select ends up getting chilly and lose the game.
*/
#include <stdio.h>
#define MAX_CHOCOLATE_COUNT 3

int main(){
    int total_chocolate_count=10, player_number=1;
    int chocolate_taken=0;
    while(total_chocolate_count > 0){
        printf("Player %d choose number of chocolate(s): ",player_number);
        scanf("%d",&chocolate_taken);

        if((chocolate_taken < 1) && (chocolate_taken > MAX_CHOCOLATE_COUNT)){
            printf("Wrong choice! Choose between 1 and 3 chocolates.\n");
            continue;
        }

        if(chocolate_taken > total_chocolate_count){
            total_chocolate_count = 0;
        }
        else{
            total_chocolate_count -= chocolate_taken;
        }

        player_number = (player_number == 1)? 2:1;
    }

    printf("Player %d has lost and must eat the chilly!\n",player_number);

    return 0;
}