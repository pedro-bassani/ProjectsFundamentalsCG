#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[10], vEven[10], vOdd[10];
    int i, j, k, evenCount = 0, oddCount = 0;

    srand(time(NULL));

    printf("Vector v: ");
    for (i = 0; i < 10; i++) {
        v[i] = rand() % 81 + 10; 
        printf("%d ", v[i]);

        if (v[i] % 2 == 0) {
            vEven[evenCount] = v[i];
            evenCount++;
        } else {
            vOdd[oddCount] = v[i];
            oddCount++;
        }
    }
    printf("\n");

    printf("Vector vEven: ");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", vEven[i]);
    }
    printf("\n");

    printf("Vector vOdd: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", vOdd[i]);
    }
    printf("\n");

    return 0;
}