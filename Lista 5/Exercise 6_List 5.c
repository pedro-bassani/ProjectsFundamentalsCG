#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int scores[4] = {0};
    int i, j, round;
    int high = 0, winner = -1;

    srand(time(NULL));

    for (i = 1; i <= 5; i++) {
        printf("\nRound %d:\n", i);
        for (j = 0; j < 4; j++) {
            round = rand() % 101;
            scores[j] += round;
            printf("Player %d scored: %d points\n", j + 1, round);

            if (round > 80) {
                printf("Featured Round: Player %d\n", j + 1);
            }
        }
    }

    printf("\nFinal Scores:\n");
    for (i = 0; i < 4; i++) {
        printf("Player %d: %d points\n", i + 1, scores[i]);

        if (scores[i] > high) {
            high = scores[i];
            winner = i;
        }
    }

    printf("\n");
    if (winner != -1) {
        printf("Winner: Player %d\n", winner + 1);
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}