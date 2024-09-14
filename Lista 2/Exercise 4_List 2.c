#include <stdio.h>

int main () {

    float GA, GB, final;

    printf("What is your GA: ");
    scanf("%f", &GA);

    printf("What is your GB: ");
    scanf("%f", &GB);

    final = (GA * 1 / 3) + (GB * 2 / 3);

    printf("Your result is: %.2f ", final);

    return 0;
}