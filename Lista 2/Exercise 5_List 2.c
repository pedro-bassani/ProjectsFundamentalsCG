#include <stdio.h>

int main () {

    float price = 6.19, driver, total;

    printf("The gasoline today is R$ 6,19");
    printf("\n");

    printf("How much do you have to fill the tank? R$ ");
    scanf("%f", &driver);

    total = driver / price;

    printf("You fill %.2f of gas", total);

    return 0;
}