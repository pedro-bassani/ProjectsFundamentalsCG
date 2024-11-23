#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[10], w[10];
    int i, j;

    srand(time(NULL));

    printf("Vector v: ");
    for (i = 0; i < 10; i++) {
        v[i] = rand() % 81 + 10; 
        printf("%d ", v[i]);
    }
    printf("\n");

    j = 0;
    for (i = 9; i >= 0; i--) {
        w[j] = v[i];
        j++;
    }

    printf("Vector w (reverse of v): ");
    for (i = 0; i < 10; i++) {
        printf("%d ", w[i]);
    }
    printf("\n");

    return 0;
}