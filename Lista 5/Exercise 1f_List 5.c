#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[10];
    int i;
    int sum = 0, product = 1;

    srand(time(NULL));


    for (i = 0; i < 10; i++) {
        v[i] = rand() % 81 + 10; 
        printf("%d ", v[i]);

        sum += v[i];
        product *= v[i];
    }
    printf("\n");

    printf("Sum of the vector elements: %d\n", sum);
    printf("Product of the vector elements: %d\n", product);

    return 0;
}