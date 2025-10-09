/*
Name:Muiruri Elias
Reg No:CT100/G/26169/25
Description :Program to enter password using do while loop
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0, max_attempts = 3;

    // Seed random number generator
    srand(time==0);
    //Any number from 1 to 20
    secret = (rand() % 20) + 1; 
    //prompt the user to choose a number between 1 to 20
    printf("Choose your number\n");
    printf("You have %d attempts to guess it.\n", max_attempts);

    do {
        printf("Enter your guess ,%d attempts left): ", max_attempts - attempts);
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high! Try again\n");
        } else if (guess < secret) {
            printf("Too low! Try again\n");
        } else {
            printf("ACCESS GRANTED!\n", attempts);
             // Exit loop if correct
        }

        if (attempts == max_attempts && guess != secret) {
            printf("ACCESS DENIED !\n", secret);
        }

    } while (attempts < max_attempts && guess != secret);

    return 0;
    }