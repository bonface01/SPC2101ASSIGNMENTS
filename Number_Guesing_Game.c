/*
Name : Bonface Mutinda 
RegNo: CT101/G/26531/25
WEEK 4 ASSIGNMENT [Q2]
DESCRIPTION :
Number guessing game with input validation and limited attempts
*/

#include <stdio.h>

int main() 
{
    int Attempt = 3;
    int number = -1;  
    int secretnumber = 9;

    printf("Welcome to our number guessing game...\n");
    printf("Guess a number from 1 to 20\n");

    while (number != secretnumber && Attempt > 0) { 
        printf("Enter your guess: ");
        scanf("%d", &number);

        if (number > 0 && number <= 20) { // validation complex 
            Attempt--;

            if (number == secretnumber) {  // correct guess
                printf("Congratulations! You guessed it!\n");
                break; 
            } 
            else if (number > secretnumber) {
                printf("Too high!\n");
            } 
            else {
                printf("Too low!\n");
            }

            if (Attempt == 0 && number != secretnumber) {
                printf("You have used all your attempts. Game over!\n");
            } 
            else if (number != secretnumber) {
                printf("Attempts left: %d\n", Attempt);
            }
        } 
        else {
            printf("Invalid input! Please enter a number between 1 and 20.\n");
        }
    }

    return 0;
}