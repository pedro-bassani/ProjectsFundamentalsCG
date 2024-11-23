#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[10];
    int i;
    int sum = 0;
    double avg;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        v[i] = rand() % 81 + 10; 
        printf("%d ", v[i]);
        sum += v[i];
    }
    printf("\n");

    avg = (double)sum / 10;

    printf("The average of the vector values is: %.2f\n", avg);

    return 0;
}