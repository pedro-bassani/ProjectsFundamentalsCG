#include <stdio.h>

int main() {
    int n;
    char star;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter a star: ");
    scanf("%c", &star);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", star);
        }
    }

    return 0;
}