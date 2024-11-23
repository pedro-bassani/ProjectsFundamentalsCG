#include <stdio.h>

int main() {
    int steps[7];
    int i;

    printf("Enter the number of steps taken each day of the week:\n");

    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &steps[i]);
    }

    return 0;
}