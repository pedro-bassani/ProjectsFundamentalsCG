#include <stdio.h>

int main () {

    int bird, meal;

    printf("How much birds do you have?");
    scanf("%d", &bird);

    meal = bird * 30;

    printf("To feed all the birds, you will give %d g of birdseed per day", meal);

    return 0;
}