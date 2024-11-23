#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[10];
    int i;
    int large, small;

    srand(time(NULL));

    large = small = rand() % 81 + 10; 
    for (i = 0; i < 10; i++) {
        v[i] = rand() % 81 + 10; 
        printf("%d ", v[i]);

        if (v[i] > large) {
            large = v[i];
        }
        if (v[i] < small) {
            small = v[i];
        }
    }
    printf("\n");

    printf("large value: %d\n", large);
    printf("small value: %d\n", small);

    return 0;
}