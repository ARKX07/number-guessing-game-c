#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int random_number = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess_number;
    int attempts1 = 0;
    int attempts2 = 0;

    int player = rand() % 2 + 1; // Randomly select player 1 or player 2 to start
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a random number between 1 and 100. Can you guess it?\n");
    do{
        if(player == 1){
            printf("Enter your guess player 1: ");
        }
        else{
            printf("Enter your guess player 2: ");
        }
        scanf("%d", &guess_number);
        if(player == 1){
            attempts1++;
        }
        else{
            attempts2++;
        }
        if(guess_number > random_number){
            printf("Too high! Try again.\n");
            printf("Hint: The number is less than %d.\n", guess_number);
            if(player == 1){
                player = 2;
            }
            else{
                player = 1;
            }
        }
        else if(guess_number < random_number){
            printf("Too low! Try again.\n");
            printf("Hint: The number is greater than %d.\n", guess_number);
            if(player == 1){
                player = 2;
            }
            else{
                player = 1;
            }
        }
        else{
            printf("Congratulations! You guessed the number correctly.\n");
        }
    }while(guess_number != random_number);
    printf("You won  player %d!\n", player);
    if(player == 1){
        printf("You took %d attempts to guess the number player %d.\n", attempts1, player);
    }
    else{
        printf("You took %d attempts to guess the number player %d.\n", attempts2, player);
    }
    return 0;
}