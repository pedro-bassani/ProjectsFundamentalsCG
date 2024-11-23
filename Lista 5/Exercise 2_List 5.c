#include <stdio.h>

int main() {
    int v[5], i;

    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    printf("Result:\n");
    for (i = 0; i < 5; i++) {
        printf("%d x %d = %d\n", i, v[i], i * v[i]);
    }

    return 0;
}