#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int guess;
    int number;
    int attempts = 0;

    // Seed the random number generator
    srand(time(NULL));
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Guess the number (between 1 and 100): ");

    while (1) {
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number: ");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }

        attempts++;

        if (guess < number) {
            printf("Too low! Try again: ");
        } else if (guess > number) {
            printf("Too high! Try again: ");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", number, attempts);
            break;
        }
    }

    return 0;
}