#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

   

    while (guess != secretNumber && outOfGuesses == 0) {

        if (guessCount < guessLimit) {
            printf("Enter your guess ");
            scanf("%d", &guess);
            guessCount ++;
        } else {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1) {
    printf("Out of guesses");
    } else {
        printf("You Win!");
    }
}