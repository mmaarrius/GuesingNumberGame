#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "helper.h"

void Game(int);

int main() {
    srand(time(0));
    int guessNr = 0;
    guessNr = thinkNumber(); 
    Game(guessNr);
}

void Game(int guessNr){
    printf("**********Game Started**********\n\n");
    printf("Computer has picking a number.\nWhat number is thinking about?\n\n");
    
    int userNr = 0;
    
    while ( guessNr != userNr ) {
        printf("Type a number under 100:");
        scanf("%d", &userNr);
        if ( userNr == guessNr ) {
            printf("Correct! You won!\n");
        } else if ( userNr > guessNr ) {
            printf("Wrong! Number is smaller than %d\n", userNr);
        } else {
            printf("Wrong! Number is bigger than %d\n", userNr);
        }
    }
}