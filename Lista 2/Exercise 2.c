#include <stdio.h>

int main () {

     float dolar, real;

    printf("Today the Dolar costs R$ 5,64 real\n");

    printf("How much do you want to trade? $ ", real);
    scanf("%f", &real);

    dolar = real * 5.64;

    printf("You will pay R$ %.2f in real \n", dolar);

    return 0;
}