#include <stdio.h>

int main() {
    int steps[7];
    int i, totalSteps = 0;
    double averageSteps;

    printf("Enter the number of steps taken each day of the week:\n");

    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &steps[i]);

        totalSteps += steps[i];
    }

    averageSteps = (double)totalSteps / 7;

    printf("Average steps per day: %.2f\n", averageSteps);

    return 0;
}