#include <stdio.h>

int main() {
    int num, i, evenCount = 0, oddCount = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter the %dth num: ", i+1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("num of even nums: %d\n", evenCount);
    printf("num of odd nums: %d\n", oddCount);

    return 0;
}