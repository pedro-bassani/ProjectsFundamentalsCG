#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, i;

    srand(time(NULL));

    secret = rand() % 10 + 1;

    printf("Guess the number between 1 and 10. You have 3 tries.\n");

    for (i = 0; i < 3; i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Congratulations! You guessed it!\n");
            break;
        } else if (guess < secret) {
            printf("The secret number is higher.\n");
        } else {
            printf("The secret number is lower.\n");
        }
    }

    if (i == 3) {
        printf("You ran out of tries. The secret number was %d.\n", secret);
    }

    return 0;
}