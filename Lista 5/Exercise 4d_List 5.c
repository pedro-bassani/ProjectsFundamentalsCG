#include <stdio.h>

int main() {
    int steps[7];
    int i;

    printf("Enter the number of steps taken each day of the week:\n");

    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &steps[i]);
    }

    printf("Days with 10,000 or more steps:\n");
    for (i = 0; i < 7; i++) {
        if (steps[i] >= 10000) {
            printf("Day %d\n", i + 1);
        }
    }

    return 0;
}