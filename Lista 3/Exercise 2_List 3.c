#include <stdio.h>

int main () {

    int a,b,c, result_ab, result_ac;

    printf("What is the A valor? ");
    scanf("%d", &a);
    printf("What is the B valor? ");
    scanf("%d", &b);
    printf("What is the C valor? ");
    scanf("%d", &c);

    if (a+b > a+c) {
        result_ab = a + b;
        printf("The result A + B is bigger than A + C\n");
        printf("\nAnd the result is %d", result_ab);

    } else if (a+c > a+b) {
        result_ac = a + c;
        printf("The result A + C is bigger than A + B\n");
        printf("\nAnd the result is %d", result_ac);

    }

    return 0;
}