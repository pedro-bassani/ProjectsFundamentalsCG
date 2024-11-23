#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, i, j;
    int results[6] = {0};

    printf("Enter the number of throws (N): ");
    scanf("%d", &N);

    srand(time(NULL));

    for (i = 0; i < N; i++) {
        int roll = rand() % 6 + 1; 
        results[roll - 1]++;
    }

    printf("Results:\n");
    for (i = 0; i < 6; i++) {
        double percentage = (double)results[i] / N * 100;
        printf("Side %d: %.2f%%\n", i + 1, percentage);
    }

    return 0;
}