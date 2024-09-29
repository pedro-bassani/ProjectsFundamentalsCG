#include <stdio.h>

int main () {

    int n, result;

    printf("Type a number: ");
    scanf("%d", &n);

    if (n > 0) {

        result = n * 2;
        printf("The result is %d", result);

    } else {

        result = n * 3;
        printf("The result is %d", result);
        
    }

    return 0;
}